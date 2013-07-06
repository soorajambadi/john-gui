/***************************************************************
 * Name:      wxjohnMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    jvc ()
 * Created:   2011-04-20
 * Copyright: jvc ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "wxjohnMain.h"
//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__WXMAC__)
        wxbuild << _T("-Mac");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}


wxjohnFrame::wxjohnFrame(wxFrame *frame)
    : GUIFrame(frame)
{
#if wxUSE_STATUSBAR
    statusBar->SetStatusText(_("John The Ripper Gui"), 0);
    statusBar->SetStatusText(wxbuildinfo(short_f), 1);
#endif
}

wxjohnFrame::~wxjohnFrame()
{
}

void wxjohnFrame::OnClose(wxCloseEvent &event)
{
    Destroy();
}

void wxjohnFrame::OnQuit(wxCommandEvent &event)
{
    Destroy();
}

void wxjohnFrame::OnAbout(wxCommandEvent &event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void wxjohnFrame::start_ripping(wxCommandEvent& event)
{
    file_path = m_filePicker2->GetPath();
    if(!(file_path.IsEmpty()))
    {
    ripjohn_thread *rj = new ripjohn_thread(this);
    rj->Create();
    rj->Run();
    }
}

void wxjohnFrame::stop_ripping(wxCommandEvent& event)
{
    wxKill(pid2,wxSIGKILL,NULL,wxKILL_CHILDREN);
}
void wxjohnFrame::test_john(wxCommandEvent &event)
{
    testjohn_thread *tj = new testjohn_thread(this); // tj is the test john thread
    tj->Create();
    tj->Run();
}

void wxjohnFrame::stop_testjohn(wxCommandEvent &event)
{
    wxKill(pid,wxSIGKILL,NULL,wxKILL_CHILDREN);
}

testjohn_thread::testjohn_thread(wxjohnFrame *frame)
{
    t_frame = frame;
}

testjohn_thread::~testjohn_thread()
{
}
void *testjohn_thread::Entry()
{

    wxProcess *pr = new pipedprocess(t_frame);//pr is the wxprocess
    pid = wxExecute(wxString(wxT("john --test")),wxEXEC_ASYNC|wxEXEC_MAKE_GROUP_LEADER,pr);
    t_frame->pid = pid;
    wxInputStream *out = pr->GetInputStream(); // out is the wxoutputstream
    wxChar buf[1024];
    wxStreamToTextRedirector redirect(t_frame->m_textCtrl3);
    {
    using namespace std;
    while(!(bool(out->Eof())))
    {
    out->Read((void *) buf,1024);
    wxMutexGuiEnter();
    cout<<buf;
    wxMutexGuiLeave();
    }
    }
    return NULL;
}

void testjohn_thread::OnExit()
{
   wxKill(pid, wxSIGKILL, NULL, wxKILL_CHILDREN);
}

ripjohn_thread::ripjohn_thread(wxjohnFrame *frame)
{
    t_frame = frame;
}

ripjohn_thread::~ripjohn_thread()
{
}

void *ripjohn_thread::Entry()
{

    wxProcess *pr = new pipedprocess(t_frame);//pr is the wxprocess
    pid2 = wxExecute(wxString(wxT("john ")) + t_frame->file_path,wxEXEC_ASYNC|wxEXEC_MAKE_GROUP_LEADER,pr);
    t_frame->pid2 = pid2;
    wxInputStream *out = pr->GetInputStream(); // out is the wxoutputstream
    wxChar buf[1024];
    wxStreamToTextRedirector redirect(t_frame->m_textCtrl2);
    {
    using namespace std;
    while(!(bool(out->Eof())))
    {
    out->Read((void *) buf,1024);
    wxMutexGuiEnter();
    cout<<buf;
    wxMutexGuiLeave();
    }
    }
    return NULL;
}

void ripjohn_thread::OnExit()
{
     wxKill(pid2,wxSIGKILL,NULL,wxKILL_CHILDREN);
}

pipedprocess::pipedprocess(wxjohnFrame *frame)
{
    p_frame = frame;
    Redirect();
}

pipedprocess::~pipedprocess()
{

}



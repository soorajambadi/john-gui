/***************************************************************
 * Name:      wxjohnMain.h
 * Purpose:   Defines Application Frame
 * Author:    jvc ()
 * Created:   2011-04-20
 * Copyright: jvc ()
 * License:
 **************************************************************/

#ifndef WXJOHNMAIN_H
#define WXJOHNMAIN_H



#include "wxjohnApp.h"
#include <wx/thread.h>
#include "GUIFrame.h"
#include <wx/process.h>

class wxjohnFrame: public GUIFrame
{
    public:
        wxjohnFrame(wxFrame *frame);
        ~wxjohnFrame();
        int pid; // for test-john
        int pid2; //for rip-john
        wxString file_path;//password file path
    private:
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void OnAbout(wxCommandEvent& event);
        virtual void test_john(wxCommandEvent& event); // test your computer speed for various passwords...
        virtual void stop_testjohn(wxCommandEvent& event);//stop testing
        virtual void start_ripping(wxCommandEvent& event);//start cracking for passwords
        virtual void stop_ripping(wxCommandEvent& event); //stop cracking for passwords
};

class testjohn_thread : public wxThread
{
    private:
        void *Entry();
        void OnExit();
        wxjohnFrame *t_frame;// pointer to frame to call it later.
        int pid;
    public:
        testjohn_thread(wxjohnFrame *frame);
        ~testjohn_thread();
};

class pipedprocess : public wxProcess
{
    private:
        wxjohnFrame *p_frame;
    public:
        pipedprocess(wxjohnFrame *frame);
        ~pipedprocess();
};

class ripjohn_thread : public wxThread
{
    private:
        void *Entry();
        void OnExit();
        wxjohnFrame *t_frame;// pointer to frame to call it later.
    public:
        ripjohn_thread(wxjohnFrame *frame);
        ~ripjohn_thread();
        int pid2;
};
#endif // WXJOHNMAIN_H

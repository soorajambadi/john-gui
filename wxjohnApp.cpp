/***************************************************************
 * Name:      wxjohnApp.cpp
 * Purpose:   Code for Application Class
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

#include "wxjohnApp.h"
#include "wxjohnMain.h"

IMPLEMENT_APP(wxjohnApp);

bool wxjohnApp::OnInit()
{
    wxjohnFrame* frame = new wxjohnFrame(0L);

    frame->Show();

    return true;
}

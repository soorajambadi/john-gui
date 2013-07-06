///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 21 2009)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUIFrame__
#define __GUIFrame__

#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/filepicker.h>
#include <wx/toolbar.h>
#include <wx/grid.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/spinctrl.h>
#include <wx/checkbox.h>
#include <wx/statbox.h>
#include <wx/gbsizer.h>
#include <wx/button.h>
#include <wx/listbox.h>
#include <wx/aui/auibook.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/msgdlg.h>
///////////////////////////////////////////////////////////////////////////

#define idMenuQuit 1000
#define ID_RECOVER 1001
#define ID_CONFIGUREJOHN 1002
#define idMenuAbout 1003

///////////////////////////////////////////////////////////////////////////////
/// Class GUIFrame
///////////////////////////////////////////////////////////////////////////////
class GUIFrame : public wxFrame
{
	private:

	protected:
		wxMenuBar* mbar;
		wxMenu* fileMenu;
		wxMenu* recovery;
		wxMenu* options;
		wxMenu* helpMenu;
		wxToolBar* m_toolBar2;
		wxStaticText* m_staticText9;
		wxStaticText* m_staticText11;
		wxStaticText* m_staticText13;
		wxStaticText* m_staticText121;
		wxStaticText* m_staticText141;
		wxFilePickerCtrl* m_filePicker2;
		wxStaticText* m_staticText161;
		wxStaticText* m_staticText17;
		wxAuiNotebook* m_auinotebook2;
		wxPanel* m_panel5;
		wxGrid* m_grid3;
		wxPanel* m_panel6;
		wxStaticText* m_staticText12;
		wxStaticText* m_staticText14;
		wxSpinCtrl* m_spinCtrl5;
		wxStaticText* m_staticText15;
		wxSpinCtrl* m_spinCtrl6;
		wxCheckBox* m_checkBox6;
		wxCheckBox* m_checkBox7;
		wxCheckBox* m_checkBox8;
		wxPanel* m_panel7;
		wxPanel* m_panel51;
		wxStaticText* m_staticText21;
		wxFilePickerCtrl* m_filePicker3;
		wxStaticText* m_staticText22;
		wxFilePickerCtrl* m_filePicker4;
		wxPanel* m_panel61;
		wxButton* m_button1;
		wxButton* m_button2;
		wxPanel* m_panel71;
		wxListBox* m_listBox1;
		wxStaticText* m_staticText20;
		wxStatusBar* statusBar;

		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnQuit( wxCommandEvent& event ) { event.Skip(); }
		virtual void configure( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAbout( wxCommandEvent& event ) { event.Skip(); }
		virtual void start_ripping( wxCommandEvent& event ) { event.Skip(); }
		virtual void test_john( wxCommandEvent& event ) { event.Skip(); }
		virtual void stop_testjohn( wxCommandEvent& event ) { event.Skip(); }


	public:
		wxTextCtrl* m_textCtrl2;
		wxTextCtrl* m_textCtrl3;
		GUIFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("wxWidgets Application Template"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 481,466 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		~GUIFrame();

};

#endif //__GUIFrame__

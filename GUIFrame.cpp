///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 21 2009)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif //WX_PRECOMP

#include "GUIFrame.h"

#include "small_edit_pencil_icon.xpm"
#include "small_folder_icon.xpm"
#include "small_preview_page_icon.xpm"
#include "small_radio_options_icon.xpm"
#include "small_satellite_dish_icon.xpm"
#include "small_sync_icon.xpm"

///////////////////////////////////////////////////////////////////////////

GUIFrame::GUIFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	mbar = new wxMenuBar( 0 );
	fileMenu = new wxMenu();
	wxMenuItem* menuFileQuit;
	menuFileQuit = new wxMenuItem( fileMenu, idMenuQuit, wxString( wxT("&Quit") ) + wxT('\t') + wxT("Alt+F4"), wxT("Quit the application"), wxITEM_NORMAL );
	fileMenu->Append( menuFileQuit );

	mbar->Append( fileMenu, wxT("&File") );

	recovery = new wxMenu();
	wxMenuItem* recover;
	recover = new wxMenuItem( recovery, ID_RECOVER, wxString( wxT("Recover") ) , wxEmptyString, wxITEM_NORMAL );
	recovery->Append( recover );

	mbar->Append( recovery, wxT("Recovery") );

	options = new wxMenu();
	wxMenuItem* configurejohn;
	configurejohn = new wxMenuItem( options, ID_CONFIGUREJOHN, wxString( wxT("Configure-John") ) , wxEmptyString, wxITEM_NORMAL );
	options->Append( configurejohn );

	mbar->Append( options, wxT("Options") );

	helpMenu = new wxMenu();
	wxMenuItem* menuHelpAbout;
	menuHelpAbout = new wxMenuItem( helpMenu, idMenuAbout, wxString( wxT("&About") ) + wxT('\t') + wxT("F1"), wxT("John The Ripper Gui in wxWidgets"), wxITEM_NORMAL );
	helpMenu->Append( menuHelpAbout );

	mbar->Append( helpMenu, wxT("&Help") );

	this->SetMenuBar( mbar );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	m_toolBar2 = new wxToolBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL );
	m_staticText9 = new wxStaticText( m_toolBar2, wxID_ANY, wxT("session"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	m_toolBar2->AddControl( m_staticText9 );
	m_toolBar2->AddTool( wxID_ANY, wxT("tool"), wxBitmap( small_edit_pencil_icon_xpm ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString );
	m_staticText11 = new wxStaticText( m_toolBar2, wxID_ANY, wxT("search"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	m_toolBar2->AddControl( m_staticText11 );
	m_toolBar2->AddTool( wxID_ANY, wxT("tool"), wxBitmap( small_preview_page_icon_xpm ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString );
	m_staticText13 = new wxStaticText( m_toolBar2, wxID_ANY, wxT("help"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	m_toolBar2->AddControl( m_staticText13 );
	m_toolBar2->AddTool( wxID_ANY, wxT("tool"), wxBitmap( small_radio_options_icon_xpm ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString );
	m_staticText121 = new wxStaticText( m_toolBar2, wxID_ANY, wxT("homepage"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText121->Wrap( -1 );
	m_toolBar2->AddControl( m_staticText121 );
	m_toolBar2->AddTool( wxID_ANY, wxT("tool"), wxBitmap( small_sync_icon_xpm ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString );
	m_staticText141 = new wxStaticText( m_toolBar2, wxID_ANY, wxT("passfile"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText141->Wrap( -1 );
	m_toolBar2->AddControl( m_staticText141 );
	m_filePicker2 = new wxFilePickerCtrl( m_toolBar2, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_DEFAULT_STYLE );
	m_toolBar2->AddControl( m_filePicker2 );
	m_staticText161 = new wxStaticText( m_toolBar2, wxID_ANY, wxT("start"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText161->Wrap( -1 );
	m_toolBar2->AddControl( m_staticText161 );
	m_toolBar2->AddTool( wxID_ANY, wxT("tool"), wxBitmap( small_satellite_dish_icon_xpm ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString );
	m_staticText17 = new wxStaticText( m_toolBar2, wxID_ANY, wxT("stop"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	m_toolBar2->AddControl( m_staticText17 );
	m_toolBar2->AddTool( wxID_ANY, wxT("tool"), wxBitmap( small_folder_icon_xpm ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString );
	m_toolBar2->Realize();

	bSizer1->Add( m_toolBar2, 0, wxEXPAND, 5 );

	m_auinotebook2 = new wxAuiNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxAUI_NB_DEFAULT_STYLE );
	m_panel5 = new wxPanel( m_auinotebook2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );

	m_grid3 = new wxGrid( m_panel5, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );

	// Grid
	m_grid3->CreateGrid( 20, 5 );
	m_grid3->EnableEditing( true );
	m_grid3->EnableGridLines( true );
	m_grid3->EnableDragGridSize( false );
	m_grid3->SetMargins( 0, 0 );

	// Columns
	m_grid3->EnableDragColMove( false );
	m_grid3->EnableDragColSize( true );
	m_grid3->SetColLabelSize( 30 );
	m_grid3->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );

	// Rows
	m_grid3->EnableDragRowSize( true );
	m_grid3->SetRowLabelSize( 80 );
	m_grid3->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );

	// Label Appearance

	// Cell Defaults
	m_grid3->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer10->Add( m_grid3, 1, wxALL|wxEXPAND, 5 );

	m_textCtrl2 = new wxTextCtrl( m_panel5, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_READONLY );
	bSizer10->Add( m_textCtrl2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_panel5->SetSizer( bSizer10 );
	m_panel5->Layout();
	bSizer10->Fit( m_panel5 );
	m_auinotebook2->AddPage( m_panel5, wxT("Hashes"), true, wxNullBitmap );
	m_panel6 = new wxPanel( m_auinotebook2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxStaticBoxSizer* sbSizer2;
	sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( m_panel6, wxID_ANY, wxT("Status") ), wxVERTICAL );

	wxGridBagSizer* gbSizer21;
	gbSizer21 = new wxGridBagSizer( 0, 0 );
	gbSizer21->SetFlexibleDirection( wxBOTH );
	gbSizer21->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );

	gbSizer21->Add( bSizer12, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxEXPAND, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	m_staticText12 = new wxStaticText( m_panel6, wxID_ANY, wxT("password-length"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer3->Add( m_staticText12, 0, wxALL, 5 );

	wxGridSizer* gSizer2;
	gSizer2 = new wxGridSizer( 2, 2, 0, 0 );

	m_staticText14 = new wxStaticText( m_panel6, wxID_ANY, wxT("min"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	gSizer2->Add( m_staticText14, 0, wxALL, 5 );

	m_spinCtrl5 = new wxSpinCtrl( m_panel6, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
	gSizer2->Add( m_spinCtrl5, 0, wxALL, 5 );

	m_staticText15 = new wxStaticText( m_panel6, wxID_ANY, wxT("max"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	gSizer2->Add( m_staticText15, 0, wxALL, 5 );

	m_spinCtrl6 = new wxSpinCtrl( m_panel6, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
	gSizer2->Add( m_spinCtrl6, 0, wxALL, 5 );

	bSizer3->Add( gSizer2, 1, wxEXPAND, 5 );

	gbSizer21->Add( bSizer3, wxGBPosition( 0, 3 ), wxGBSpan( 1, 1 ), wxALIGN_CENTER_VERTICAL|wxEXPAND|wxALL, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	wxGridSizer* gSizer3;
	gSizer3 = new wxGridSizer( 2, 2, 0, 0 );

	wxStaticBoxSizer* sbSizer3;
	sbSizer3 = new wxStaticBoxSizer( new wxStaticBox( m_panel6, wxID_ANY, wxT("charset") ), wxVERTICAL );

	m_checkBox6 = new wxCheckBox( m_panel6, wxID_ANY, wxT("alphabets"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer3->Add( m_checkBox6, 0, wxALL, 5 );

	m_checkBox7 = new wxCheckBox( m_panel6, wxID_ANY, wxT("numerals"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer3->Add( m_checkBox7, 0, wxALL, 5 );

	m_checkBox8 = new wxCheckBox( m_panel6, wxID_ANY, wxT("extra "), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer3->Add( m_checkBox8, 0, wxALL, 5 );

	gSizer3->Add( sbSizer3, 1, 0, 5 );

	bSizer4->Add( gSizer3, 1, wxEXPAND, 5 );

	gbSizer21->Add( bSizer4, wxGBPosition( 0, 4 ), wxGBSpan( 1, 1 ), wxALIGN_CENTER_VERTICAL|wxEXPAND|wxALL, 5 );

	sbSizer2->Add( gbSizer21, 1, 0, 5 );

	m_panel6->SetSizer( sbSizer2 );
	m_panel6->Layout();
	sbSizer2->Fit( m_panel6 );
	m_auinotebook2->AddPage( m_panel6, wxT("BruteForce"), false, wxNullBitmap );
	m_panel7 = new wxPanel( m_auinotebook2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_auinotebook2->AddPage( m_panel7, wxT("Recovery"), false, wxNullBitmap );
	m_panel51 = new wxPanel( m_auinotebook2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	wxGridSizer* gSizer5;
	gSizer5 = new wxGridSizer( 2, 2, 0, 0 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );

	m_staticText21 = new wxStaticText( m_panel51, wxID_ANY, wxT("wordlist"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	bSizer9->Add( m_staticText21, 0, wxALL|wxEXPAND, 5 );

	gSizer5->Add( bSizer9, 1, wxEXPAND, 5 );

	m_filePicker3 = new wxFilePickerCtrl( m_panel51, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_DEFAULT_STYLE );
	gSizer5->Add( m_filePicker3, 0, wxALL|wxEXPAND, 5 );

	m_staticText22 = new wxStaticText( m_panel51, wxID_ANY, wxT("rules"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	gSizer5->Add( m_staticText22, 0, wxALL|wxEXPAND, 5 );

	m_filePicker4 = new wxFilePickerCtrl( m_panel51, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_DEFAULT_STYLE );
	gSizer5->Add( m_filePicker4, 0, wxALL|wxEXPAND, 5 );

	bSizer8->Add( gSizer5, 0, wxEXPAND, 5 );

	m_panel51->SetSizer( bSizer8 );
	m_panel51->Layout();
	bSizer8->Fit( m_panel51 );
	m_auinotebook2->AddPage( m_panel51, wxT("wordlist"), false, wxNullBitmap );
	m_panel61 = new wxPanel( m_auinotebook2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );

	m_textCtrl3 = new wxTextCtrl( m_panel61, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE );
	bSizer5->Add( m_textCtrl3, 1, wxALL|wxEXPAND, 5 );

	m_button1 = new wxButton( m_panel61, wxID_ANY, wxT("Test-John"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );

	m_button2 = new wxButton( m_panel61, wxID_ANY, wxT("Stop-Johntest"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button2, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_panel61->SetSizer( bSizer5 );
	m_panel61->Layout();
	bSizer5->Fit( m_panel61 );
	m_auinotebook2->AddPage( m_panel61, wxT("system"), false, wxNullBitmap );
	m_panel71 = new wxPanel( m_auinotebook2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	m_listBox1 = new wxListBox( m_panel71, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, wxLB_MULTIPLE|wxLB_SORT );
	m_listBox1->Append( wxT("jan 21") );
	m_listBox1->Append( wxT("jan 22") );
	m_listBox1->Append( wxT("feb 23") );
	bSizer6->Add( m_listBox1, 1, wxALL|wxEXPAND, 5 );

	m_staticText20 = new wxStaticText( m_panel71, wxID_ANY, wxT("If possible some sort of piechart stuff"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	bSizer6->Add( m_staticText20, 0, wxALL, 5 );

	m_panel71->SetSizer( bSizer6 );
	m_panel71->Layout();
	bSizer6->Fit( m_panel71 );
	m_auinotebook2->AddPage( m_panel71, wxT("statitics"), false, wxNullBitmap );

	bSizer1->Add( m_auinotebook2, 1, wxEXPAND | wxALL, 5 );

	this->SetSizer( bSizer1 );
	this->Layout();
	statusBar = this->CreateStatusBar( 2, wxST_SIZEGRIP, wxID_ANY );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
	this->Connect( menuFileQuit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnQuit ) );
	this->Connect( configurejohn->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::configure ) );
	this->Connect( menuHelpAbout->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnAbout ) );
	this->Connect( wxID_ANY, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( GUIFrame::start_ripping ) );
	m_button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::test_john ), NULL, this );
	m_button2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::stop_testjohn ), NULL, this );
}

GUIFrame::~GUIFrame()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnQuit ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::configure ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnAbout ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( GUIFrame::start_ripping ) );
	m_button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::test_john ), NULL, this );
	m_button2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::stop_testjohn ), NULL, this );
}

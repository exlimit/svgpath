#include "repodialog.h"

#include <wx/app.h>

#ifdef _MSC_VER
	#pragma comment(linker,"\"/manifestdependency:type='win32' \
	name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
	processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif

class MailApp: public wxApp
{
public:
	virtual bool OnInit()
	{
		if(!wxApp::OnInit()) return false;

		RepoDialog dlg(nullptr);
		dlg.ShowModal();

		return false;
	}
	
	int OnExit()
	{
		return 0;
	}
};

IMPLEMENT_APP(MailApp)

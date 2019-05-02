#if !defined(AFX_SETTINGS_H__11E272C0_C38B_11D3_A5E4_F4E368F8EF35__INCLUDED_)
#define AFX_SETTINGS_H__11E272C0_C38B_11D3_A5E4_F4E368F8EF35__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Settings.h : Header-Datei
//

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CSettings 

class CSettings : public CDialog
{
// Konstruktion
public:
	int speed;
	int sound;
	CSettings(CWnd* pParent = NULL);   // Standardkonstruktor

// Dialogfelddaten
	//{{AFX_DATA(CSettings)
	enum { IDD = IDD_SETTINGS };
		CButton	m_radio1;
		CButton	m_radio2;
		CButton	m_radio3;		
	//}}AFX_DATA


// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CSettings)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterst�tzung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CSettings)
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_SETTINGS_H__11E272C0_C38B_11D3_A5E4_F4E368F8EF35__INCLUDED_

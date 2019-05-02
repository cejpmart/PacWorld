#if !defined(AFX_TUTORIAL_H__0B1C6640_C227_11D3_A5E4_ACE3C4ADA636__INCLUDED_)
#define AFX_TUTORIAL_H__0B1C6640_C227_11D3_A5E4_ACE3C4ADA636__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Tutorial.h : Header-Datei
//
#include "BtnST.h"
#include "ColorStaticST.h"
/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CTutorial 

class CTutorial : public CDialog
{
// Konstruktion
public:	
	CTutorial(CWnd* pParent = NULL);   // Standardkonstruktor

// Dialogfelddaten
	//{{AFX_DATA(CTutorial)
	enum { IDD = IDD_TUTORIAL };
	CColorStaticST	m_editStatic;
	CButtonST	m_ok;
	CString	m_edit;
	//}}AFX_DATA


// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CTutorial)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterst�tzung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CTutorial)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_TUTORIAL_H__0B1C6640_C227_11D3_A5E4_ACE3C4ADA636__INCLUDED_

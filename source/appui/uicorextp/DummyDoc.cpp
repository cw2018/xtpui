#include "stdafx.h"
#include "DummyDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CDummyDoc, CDocument)

BEGIN_MESSAGE_MAP(CDummyDoc, CDocument)
    ON_COMMAND(ID_FILE_CLOSE, &CDummyDoc::OnFileClose)
END_MESSAGE_MAP()

CDummyDoc::CDummyDoc()
{
}

CDummyDoc::~CDummyDoc()
{
}

BOOL CDummyDoc::OnNewDocument()
{
    return CDocument::OnNewDocument();
}

BOOL CDummyDoc::OnOpenDocument(LPCTSTR lpszPathName)
{
    lpszPathName;
    return TRUE;
}

BOOL CDummyDoc::OnSaveDocument(LPCTSTR lpszPathName)
{
    lpszPathName;
    return TRUE;
}

BOOL CDummyDoc::DoSave(LPCTSTR lpszPathName, BOOL bReplace)
{
    lpszPathName; bReplace;
    return FALSE;
}

BOOL CDummyDoc::DoFileSave()
{
    return FALSE;
}

BOOL CDummyDoc::CanCloseFrame(CFrameWnd*)
{
    return FALSE;
}

void CDummyDoc::OnFileClose()
{
}


// MFCApplicationStatusBarView.cpp : implementation of the CMFCApplicationStatusBarView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MFCApplicationStatusBar.h"
#endif

#include "MFCApplicationStatusBarDoc.h"
#include "MFCApplicationStatusBarView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplicationStatusBarView

IMPLEMENT_DYNCREATE(CMFCApplicationStatusBarView, CView)

BEGIN_MESSAGE_MAP(CMFCApplicationStatusBarView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFCApplicationStatusBarView construction/destruction

CMFCApplicationStatusBarView::CMFCApplicationStatusBarView()
{
	// TODO: add construction code here

}

CMFCApplicationStatusBarView::~CMFCApplicationStatusBarView()
{
}

BOOL CMFCApplicationStatusBarView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CMFCApplicationStatusBarView drawing

void CMFCApplicationStatusBarView::OnDraw(CDC* pDC)
{
	CMFCApplicationStatusBarDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
	CString mystr("Hello, World!");
	CRect myrect(10, 10, 200, 200);

	pDC->DrawText(mystr,(LPRECT)myrect,0);
}


// CMFCApplicationStatusBarView printing

BOOL CMFCApplicationStatusBarView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCApplicationStatusBarView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCApplicationStatusBarView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CMFCApplicationStatusBarView diagnostics

#ifdef _DEBUG
void CMFCApplicationStatusBarView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplicationStatusBarView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplicationStatusBarDoc* CMFCApplicationStatusBarView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplicationStatusBarDoc)));
	return (CMFCApplicationStatusBarDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplicationStatusBarView message handlers

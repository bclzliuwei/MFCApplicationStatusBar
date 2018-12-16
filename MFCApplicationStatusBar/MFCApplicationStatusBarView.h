
// MFCApplicationStatusBarView.h : interface of the CMFCApplicationStatusBarView class
//

#pragma once


class CMFCApplicationStatusBarView : public CView
{
protected: // create from serialization only
	CMFCApplicationStatusBarView();
	DECLARE_DYNCREATE(CMFCApplicationStatusBarView)

// Attributes
public:
	CMFCApplicationStatusBarDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CMFCApplicationStatusBarView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCApplicationStatusBarView.cpp
inline CMFCApplicationStatusBarDoc* CMFCApplicationStatusBarView::GetDocument() const
   { return reinterpret_cast<CMFCApplicationStatusBarDoc*>(m_pDocument); }
#endif


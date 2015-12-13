// Graph.h: interface for the CGraph class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GRAPH_H__71FEE842_4797_40CE_A5D9_3FB3CE1DC9C3__INCLUDED_)
#define AFX_GRAPH_H__71FEE842_4797_40CE_A5D9_3FB3CE1DC9C3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CGraph : public CObject
{
	DECLARE_SERIAL(CGraph)
public:
	CGraph();
	CGraph(UINT m_nDrawType,CPoint m_ptOrigin,CPoint m_ptEnd);
	virtual ~CGraph();
	void Serialize(CArchive& archive);
	void CGraph::Draw(CDC *pDC);
private:
	UINT m_nDrawType;
	CPoint m_ptOrigin;
	CPoint m_ptEnd;
};

#endif // !defined(AFX_GRAPH_H__71FEE842_4797_40CE_A5D9_3FB3CE1DC9C3__INCLUDED_)

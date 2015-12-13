// Graph.h: interface for the CGraph class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GRAPH_H__ABD2CCE6_C348_40A9_8D59_845E7E90CEB4__INCLUDED_)
#define AFX_GRAPH_H__ABD2CCE6_C348_40A9_8D59_845E7E90CEB4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CGraph  
{
public:
	UINT m_nDrawType;
	CPoint m_ptOrigin;
	CPoint m_ptEnd;
	CGraph();
	CGraph(UINT m_nDrawType,CPoint m_ptPoint,CPoint m_ptEnd);
	virtual ~CGraph();

};

#endif // !defined(AFX_GRAPH_H__ABD2CCE6_C348_40A9_8D59_845E7E90CEB4__INCLUDED_)

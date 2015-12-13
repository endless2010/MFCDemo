// Graph.h: interface for the Graph class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GRAPH_H__BBE43A28_1947_464B_88CA_056FFFAFC1BF__INCLUDED_)
#define AFX_GRAPH_H__BBE43A28_1947_464B_88CA_056FFFAFC1BF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Graph  
{
public:
	Graph();
	Graph(CPoint m_ptOrigin,CPoint m_ptEnd);
	virtual ~Graph();
public:
	CPoint m_ptOrigin;
	CPoint m_ptEnd;
};

#endif // !defined(AFX_GRAPH_H__BBE43A28_1947_464B_88CA_056FFFAFC1BF__INCLUDED_)

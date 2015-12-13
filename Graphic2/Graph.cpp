// Graph.cpp: implementation of the Graph class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Graphic2.h"
#include "Graph.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Graph::Graph()
{

}

Graph::~Graph()
{

}
Graph::Graph(CPoint m_ptOrigin,CPoint m_ptEnd)
{
	this->m_ptOrigin=m_ptOrigin;
	this->m_ptEnd=m_ptEnd;
}
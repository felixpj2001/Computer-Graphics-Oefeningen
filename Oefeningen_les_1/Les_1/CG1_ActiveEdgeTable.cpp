// CG1_ActiveEdgeTable.cpp: implementation of the CG1_ActiveEdgeTable class.
//
//////////////////////////////////////////////////////////////////////

#include "CG1_ActiveEdgeTable.h"
#include <stdio.h>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
//--------------------------------------------------------------------

CG1_ActiveEdgeTable::CG1_ActiveEdgeTable()
{
	
}

//--------------------------------------------------------------------

CG1_ActiveEdgeTable::~CG1_ActiveEdgeTable()
{
	
}

//--------------------------------------------------------------------

bool compare(const CG1_Edge* first, const CG1_Edge* second)
{
    return first->Current_X < second->Current_X;
}

void CG1_ActiveEdgeTable::Add(CG1_Edge *Edge)
{
    // ZELF IMPLEMENTEREN
	ActiveEdges.push_back(Edge);
}

//--------------------------------------------------------------------

void CG1_ActiveEdgeTable::Add(CG1_EdgeTableRow *EdgeRow)
{
	CG1_Edge* CurrentEdge;
	for(EdgeRow->EdgeIterator = EdgeRow->Edges.begin(); EdgeRow->EdgeIterator != EdgeRow->Edges.end(); EdgeRow->EdgeIterator++)
	{
		CurrentEdge = *(EdgeRow->EdgeIterator);					
		CurrentEdge->Current_X = (float)CurrentEdge->x_down;	// initializeren op de laagste waarde
		Add(CurrentEdge);									// MOET JE ZELF IMPLEMENTEREN
	}
    ActiveEdges.sort(compare);
}

//--------------------------------------------------------------------

void CG1_ActiveEdgeTable::Writedata(int y_value)
{
	if(ActiveEdges.size() > 0)
	{
		printf("%d: ", y_value);
		CG1_Edge* CurrentEdge;
		for(ActiveEdgeIterator = ActiveEdges.begin(); ActiveEdgeIterator != ActiveEdges.end(); ActiveEdgeIterator++)
		{
			CurrentEdge = *ActiveEdgeIterator;
			printf(" x = %.2f ", CurrentEdge->Current_X);
		}
		printf("\n");
	}
	else
	{
		printf("%d: empty\n", y_value);
	}
}

//--------------------------------------------------------------------

void CG1_ActiveEdgeTable::Update_CurrentX_Values()
{
	// ZELF IMPLEMENTEREN
    for (ActiveEdgeIterator = ActiveEdges.begin(); ActiveEdgeIterator != ActiveEdges.end(); ActiveEdgeIterator++)
    {
        CG1_Edge* current = *ActiveEdgeIterator;
        current->Current_X += current->Reversed_M;
    }
}

//--------------------------------------------------------------------

void CG1_ActiveEdgeTable::RemoveObsoleteEdges(int y)
{
	// ZELF IMPLEMENTEREN
    for (ActiveEdgeIterator = ActiveEdges.begin(); ActiveEdgeIterator != ActiveEdges.end();)
    {
        CG1_Edge* current = *ActiveEdgeIterator;
        int ymax = max(current->y_down, current->y_up);
        if (ymax == y)
        {
            ActiveEdgeIterator = ActiveEdges.erase(ActiveEdgeIterator);
        }
        else
        {
            ActiveEdgeIterator++;
        }
    }
}

//--------------------------------------------------------------------

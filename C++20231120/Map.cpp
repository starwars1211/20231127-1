#include "Map.h"
#include "Actor.h"

AMap::AMap()
{
	X = 0;
	Y = 0;
	Shape = '*';
	SortOrder = 100;
}

AMap::AMap(int NewX, int NewY, char NewShape, int NewSortOrder)
{
	Shape = NewShape;
	SetX(NewX);
	SetY(NewY);
	SortOrder = NewSortOrder;
	bCollide = true;
}

AMap::~AMap()
{
}

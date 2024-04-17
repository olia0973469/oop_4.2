// Line.cpp

#include "Curves.h"
#include "Line.h"

double Line::count() const
{
	double y = a * x + b;
	return y;
}

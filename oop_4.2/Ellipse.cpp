// Ellipse.cpp

#include "Curves.h"
#include "Ellipse.h"

double Ellipse::count() const
{
	double y = b * sqrt((x * x) / (a * a));
	return y;
}

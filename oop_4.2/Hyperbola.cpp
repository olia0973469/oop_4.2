// Hyperbola.cpp

#include "Curves.h"
#include "Hyperbola.h"

double Hyperbola::count() const
{
	double y = -b * sqrt((x * x) / (a * a));
	return y;
}

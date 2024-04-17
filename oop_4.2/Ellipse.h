// Ellipse.h

#pragma once
#include "Curves.h"

class Ellipse :
	public Curves
{
private:
	double a;
	double b;
	double x;
public:
	Ellipse(double a, double b, double x) : a(a), b(b), x(x) {}
	double getX() const { return x; };
	void setX(double x);
	double count() const override;
};

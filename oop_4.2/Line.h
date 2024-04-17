// Line.h

#pragma once
#include "Curves.h"

class Line :
	public Curves
{
private:
	double a;
	double b;
	double x;
public:
	Line(double a, double b, double x) : a(a), b(b), x(x) {}
	double getX() const { return x; };
	void setX(double x);
	double count() const override;
};

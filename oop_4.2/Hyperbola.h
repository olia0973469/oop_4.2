// Hyperbola.h

#pragma once
#include "Curves.h"

class Hyperbola :
	public Curves
{
private:
	double a;
	double b;
	double x;
public:
	Hyperbola(double a, double b, double x) : a(a), b(b), x(x) {}
	double getX() const { return x; };
	void setX(double x);
	double count() const override;
};


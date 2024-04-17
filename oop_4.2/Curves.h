// Curves.h

#pragma once
#include <math.h>
#include <corecrt_math_defines.h>


class Curves
{
public:
	virtual double count() const = 0;
	virtual ~Curves() {}
};

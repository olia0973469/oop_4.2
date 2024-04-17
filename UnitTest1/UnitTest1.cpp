#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_4.2/Curves.h"
#include "../oop_4.2/Curves.cpp"
#include "../oop_4.2/Line.h"
#include "../oop_4.2/Line.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a = 2.0;
			double b = 3.0;
			double x = 4.0;
			double expectedY = a * x + b;

			Line line(a, b, x);
			line.setX(x);
			double result = line.count();
			Assert::AreEqual(expectedY, result);
		}
	};
}

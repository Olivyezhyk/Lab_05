#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_03/Lab_05_03.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(Test_z1)
		{
			double x = 0.0;
			double expected = 1.0 / exp(0);

			double result = z(x);
			Assert::AreEqual(expected, result);
		}
	};
}
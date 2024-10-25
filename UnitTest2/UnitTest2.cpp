#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_02/Lab_05_02.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			double x = 0.0;
			int n = 0;
			double a = 1.0;

			double result = B(x, n, a);
			Assert::AreEqual(result, 0.0);
		}

		TEST_METHOD(TestMethod2)
		{
			double x = 0.5;
			double eps = 1e-5;
			int n = 0;
			double S = 0.0;

			double result = A(x, eps, n, S);

			Assert::AreEqual(result, atan(0.5), 1e-5);
		}
	};
}
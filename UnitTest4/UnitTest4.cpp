#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_04/Lab_05_04.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		TEST_METHOD(TestS0)
		{
			double result = S0(1);
			Assert::AreEqual(result, 1.0 + sqrt(1 + pow(sin(1), 2)), 1e-5);

			result = S0(5);
			double expected = 0;
			for (int i = 1; i <= 5; i++)
				expected += 1.0 / i + sqrt(1 + pow(sin(i), 2));
			Assert::AreEqual(result, expected, 1e-5);
		}

		TEST_METHOD(TestS1)
		{
			double result = S1(1, 1);
			Assert::AreEqual(result, 1 + sqrt(1 + pow(sin(1), 2)), 1e-5);

			result = S1(5, 1);
			double expected = 0;
			for (int i = 1; i <= 5; i++)
				expected += 1.0 / i + sqrt(1 + pow(sin(i), 2));
			Assert::AreEqual(result, expected, 1e-5);
		}

		TEST_METHOD(TestS2)
		{
			double result = S2(1, 1);
			Assert::AreEqual(result, 1 + sqrt(1 + pow(sin(1), 2)), 1e-5);

			result = S2(5, 5);
			double expected = 0;
			for (int i = 5; i >= 1; i--)
				expected += 1.0 / i + sqrt(1 + pow(sin(i), 2));
			Assert::AreEqual(result, expected, 1e-5);
		}

		TEST_METHOD(TestS3)
		{
			double result = S3(1, 1, 0);
			Assert::AreEqual(result, 1 + sqrt(1 + pow(sin(1), 2)), 1e-5);

			result = S3(5, 1, 0);
			double expected = 0;
			for (int i = 1; i <= 5; i++)
				expected += 1.0 / i + sqrt(1 + pow(sin(i), 2));
			Assert::AreEqual(result, expected, 1e-5);
		}

		TEST_METHOD(TestS4)
		{
			double result = S4(1, 1, 0);
			Assert::AreEqual(result, 1 + sqrt(1 + pow(sin(1), 2)), 1e-5);

			result = S4(5, 5, 0);
			double expected = 0;
			for (int i = 5; i >= 1; i--)
				expected += 1.0 / i + sqrt(1 + pow(sin(i), 2));
			Assert::AreEqual(result, expected, 1e-5);
		}
	};
}

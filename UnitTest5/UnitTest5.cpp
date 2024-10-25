#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_05/Lab_05_05.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		TEST_METHOD(TestQ_1)
		{
			int depth = 0;
			int result = Q(4, 4, 0, depth);
			Assert::AreEqual(result, 5);
			Assert::AreEqual(depth, 4);
		}

		TEST_METHOD(TestQ_2)
		{
			int depth = 0;
			int result = Q(5, 5, 0, depth);
			Assert::AreEqual(result, 7);
			Assert::AreEqual(depth, 5);
		}

		TEST_METHOD(TestQ_3)
		{
			int depth = 0;
			int result = Q(2, 5, 0, depth);
			Assert::AreEqual(result, 3);
			Assert::AreEqual(depth, 3);
		}

		TEST_METHOD(TestQ_4)
		{
			int depth = 0;
			int result = Q(5, 3, 0, depth);
			Assert::AreEqual(result, 5);
			Assert::AreEqual(depth, 3);
		}
	};
}

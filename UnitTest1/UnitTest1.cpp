#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_01_02/Lab_06_01_02.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
            const int n = 5;
            int r[n] = { 2, 5, 8, 9, 14 };
            int s = 0;
            int k = 0;

            processArray(r, 0, n, s, k);

            Assert::AreEqual(24, s);
            Assert::AreEqual(3, k);

            Assert::AreEqual(0, r[0]);
            Assert::AreEqual(0, r[2]);
            Assert::AreEqual(0, r[4]);

            Assert::AreEqual(5, r[1]);
            Assert::AreEqual(9, r[3]);
		}
	};
}

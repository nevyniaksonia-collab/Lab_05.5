#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.5/Lab_05.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest6
{
	TEST_CLASS(UnitTest6)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			d1 = 0;
			lc = 0;
			a = 0;
			c = 0;

			int m = 2;
			long long res = f(m);

			Assert::AreEqual(2LL, res);
			Assert::AreEqual(0, d1);
			Assert::AreEqual(1, lc);
		}
		TEST_METHOD(TestMethod2)
		{
			d1 = 0;
			lc = 0;
			a = 5;
			c = 3;

			int m = 20;
			long long res = f(m);

			Assert::AreEqual(276LL, res);
			Assert::AreEqual(3, d1);
			Assert::AreEqual(3, lc);
		}
	};
}

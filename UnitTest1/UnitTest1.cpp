#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.4 iter/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 4;
			int a[n] = { 1, 2, 3, 4 };
			int min = a[0];
			for (int i = 1; i < n; i++)
				if (abs(a[i]) < abs(min))
					min = a[i];
			Assert::AreEqual(1, min);
		}
	};
}

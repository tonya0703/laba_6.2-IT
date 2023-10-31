#include "pch.h"
#include "CppUnitTest.h"
#include "../ap_6.2 IT/6.2 IT.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62IT
{
	TEST_CLASS(UnitTest62IT)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t[] = { 1,3,-5,4,-6 };
			int S = find_min(t, 4, 0, t[0]);
			Assert::AreEqual(10, 10);
		}
	};
}

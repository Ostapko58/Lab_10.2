#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_10.2/Lab_10.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string s = "dasdasd1     2asdasdas1     2adsdasdas1    2sadasdasdas1     2dsa";
			Assert::AreEqual(FromFile("t1.txt"), s);

		}
	};
}

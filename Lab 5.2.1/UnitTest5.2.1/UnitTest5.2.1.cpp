#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 5.2.1/Source.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest521
{
	TEST_CLASS(UnitTest521)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double m = A(1, 0, -1);
			Assert::AreEqual(m, -1.);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 5.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethodA)
		{
			double a = -1.;
			A(1, 0, a);
			Assert::AreEqual(a, -1.);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab-8.2\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[17] = "abcdef 123 hello";
			int k = MaxLength(str);
			Assert::AreEqual(6, k);

		}
	};
}

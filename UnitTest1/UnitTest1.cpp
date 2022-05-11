#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\vladt\source\repos\pr2.1\pr2.1\Number.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number n(3, .5);
			n.multiply();
			Assert::IsTrue(1.5);
			
		}
	};
}

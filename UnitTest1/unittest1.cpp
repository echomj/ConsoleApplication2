#include "stdafx.h"
#include "CppUnitTest.h"
#include "../consoleApplication2/header1.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(callme)
		{
			// TODO: Your test code here
			int num = 4;
			A a;
			Assert::AreEqual(num, a.show());
		}

	};
	
	
}
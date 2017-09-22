#include "stdafx.h"
#include "CppUnitTest.h"
#include "recursive_factorial.h"
#include "myStack.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		stak ob;
		bool n = ob.push(5);
		int m = ob.pop();
		/*Test cases for factorial*/
		//fact ob;
		//int n = ob.factorial(-1);
		//int n = ob.factorial(5);
		TEST_METHOD(TestMethod1)
		{
			Assert::IsTrue(n);
			
		}
		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(m, 5);
			
		}
		TEST_METHOD(TestMethod3)
		{
			/*Test cases for factorial*/
			//Assert::AreEqual(n, 120);
			//Assert::AreNotEqual(n, 119);
			//Assert::AreEqual(n,1);

		}

	};
}
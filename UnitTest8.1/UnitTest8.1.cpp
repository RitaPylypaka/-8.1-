#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "../пр8.1іт/8.1іт.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81
{
	TEST_CLASS(UnitTest81)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		char str[] = { ".s..g." };
		int test = Count(str);
		Assert::AreEqual(0, test);
					}
				};
			}
			

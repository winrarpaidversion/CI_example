#include "pch.h"
#include "CppUnitTest.h"
#include "../PersonLib/Person.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(PersonTest)
	{
	public:
		
		TEST_METHOD(MAX_NAME_LENGTH)
		{
			std::string name(50, 'a');
			Person p{ name };
			std::string expected(40, 'a');
			Assert::AreEqual(expected, p.getName());
		}

	};
}

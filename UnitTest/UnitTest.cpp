#include "pch.h"
#include "CppUnitTest.h"
#include "../PersonLib/Person.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(PersonTest)
	{
	public:
		
		TEST_METHOD(NAME_MAX_LENGTH)
		{
			std::string name(50, 'a');
			Person p{ name };
			std::string expected(40, 'a');
			Assert::AreEqual(expected, p.getName());
		}
		TEST_METHOD(EmptyName_ShouldSetNameUndefined)
		{
			std::string name = "";
			Person person{ name };
			std::string expected = "Undefined";
			Assert::AreEqual(expected, person.getName());
		}
		TEST_METHOD(NullName_ShouldSetNameUndefined)
		{
			std::string name;

			Person person{ name };

			std::string expected = "Undefined";

			Assert::AreEqual(expected, person.getName());
		}
		TEST_METHOD(NormalName_ShouldReturnTrue)
		{
			std::string name = "Oleg";
			Person person{ name };

			Assert::AreEqual(person.getName(), name);
		}
		
	};
}

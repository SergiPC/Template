#include "stdafx.h"
#include "CppUnitTest.h"
#include "../TemplatePoint/TemPoint.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Test_operatorMinus)
		{
			TemPoint<int> a;
			TemPoint<int> b;

			a.x = a.y = 5;
			
			Assert::AreEqual(b.x, 5);
			Assert::AreEqual(b.y, 5);
		}

		TEST_METHOD(Test_operatorMinus)
		{
			TemPoint t, f, p;
			p.x = p.y = f.x = f.y = 3;
			t = p - f;

			Assert::IsTrue(t.x == 0 && t.y == 0);
		}

		TEST_METHOD(Test_operatorPlus)
		{
			TemPoint t, f, p;
			t = p + f;

			Assert::IsTrue(p.x + f.x == t.x && p.y + f.y == t.y);
		}

		TEST_METHOD(TestMethod_operatorPlusEqual)
		{
			TemPoint f, p;
			f.x = 5.0f;
			f.y = 6.0f;
			p.x = 7.0f;
			p.y = 8.0f;

			f += p;

			Assert::AreEqual(f.x, 12.0f && p.y, 14.0f);
		}

		TEST_METHOD(TestMethod_operatorMinusEqual)
		{
			TemPoint f, p;
			f.x = 8.0f;
			f.y = 7.0f;
			p.x = 6.0f;
			p.y = 5.0f;

			f -= p;

			Assert::AreEqual(f.x, 2.0f && p.y, 2.0f);
		}

		TEST_METHOD(TestMethod_operatorEqualEqual)
		{
			TemPoint f, p;
			f.x = 5.0f;
			f.y = 6.0f;
			p.x = 5.0f;
			p.y = 6.0f;

			Assert::IsTrue(f == p);
		}

		TEST_METHOD(TestMethod_operatorNotEqual)
		{
			TemPoint f, p;
			f.x = 5.0f;
			f.y = 6.0f;
			p.x = 7.0f;
			p.y = 8.0f;

			Assert::IsTrue(f != p);
		}

		TEST_METHOD(TestMethod_isZero)
		{
			TemPoint p;
			p.x = p.y = 0.0f;

			Assert::IsTrue(p.isZero());
		}

		TEST_METHOD(TestMethod_setZero)
		{
			TemPoint p;
			p.setZero();

			Assert::IsTrue(p.isZero());
		}

		TEST_METHOD(TestMethod_distanceTo)
		{
			TemPoint f, p;
			f.x = 0;
			f.y = 0;
			p.x = 2;
			p.y = 0;

			Assert::IsTrue(f.distanceTo(p) == 2);
		}

	};
}
#ifndef FIXTURE_CLASS_H
#define FIXTURE_CLASS_H

#include "CppunitLib.h"

/*
在Cppunit中，我們要先建立治具類別。這可以從CppUnit::TestFixture衍生取得。
測試治具類別，就是一個容器類別，用來管理那些用於測試特定函數或類別的所有測試案例。
一個空的測試治具類別大致如下：
*/

class MathTest : public CppUnit::TestFixture
{
public:
    CPPUNIT_TEST_SUITE(MathTest);   //MathTest是TestFixture的衍生Class
    CPPUNIT_TEST_SUITE_END();
};


#endif
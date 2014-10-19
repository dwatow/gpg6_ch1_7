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
    /*
    在其中CPPUNIT_TEST_SUITE的巨集說明中，我們要說明這個測試治具類別執行的所有測試案例。
    例如，假設這個測試治具別要測試一個math類別，
    而你又需要一個特殊測試案例，來測試這個math類取的add函數。
    你可以像下面這段程式碼一樣，建立一個測試用的函數，來完成上述的實作。
    */

public:
	void TestAddFunction()
    {
        math my_math;
        CPPUNIT_ASSERT(my_math.Add(2, 2) == 4);
    }

    /*
    在這個測試案例中，我們呼叫math.add(2, 2)，利用CppUnit提供的CPPUNIT_ASSRT巨集來驗證add呼叫的結果是否等於4。
    如果add函數沒有正確的返回結果4，CppUnit會在日誌文件中將這個錯誤記錄下來，並根據你所設置的報告輸出方式
    為你顯示這個錯誤訊息。

    在完成這個測試案例的實作之後，你要用CPPUNIT_TEST_SUITE巨集，將這個測試案例
    添加到測試治具類別中。
    */

public:
    CPPUNIT_TEST_SUITE(MathTest);   //MathTest是TestFixture的衍生Class
    CPPUNIT_TEST(TestAddFunction);  //TestAddFunction是待測的Function
    CPPUNIT_TEST_SUITE_END();
};


//完成之後，來看看unitTestMain.cpp吧！
#endif
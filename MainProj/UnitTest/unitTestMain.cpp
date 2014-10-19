#include "CppunitLib.h"
#include "FixtureClass.h"
#include <iostream>

/*
既然你已經完成了撰寫測試案例的工作，並將它們添加到一個測試治具類別中進行管理，
現在你就需要建立一個測試執行模組(test harness)，它會實際的執行這個測試治具類別(像工廠的機台)，
並輸出最後執行結果。

我們可以這樣做:
1. 建立一個CppUnit::TextTestRunner物件，
2. 添加測試治具類別到CppUnit::TextTestRunner物件
3. 設定輸果的輸出格式
4. 執行CppUnit::TextTestRunner物件。

以這個例子來說，你可以將輸出結果重新定到一個xml文件中。
這個xml文件使用了一個樣式表來顯示輸出結果，更方便於瀏覽。
*/

int main()
{
	//第一步，就是建立測試的執行物件，一個CppUnit::TextTestRunner物件
	CppUnit::TextTestRunner runner;
	
	//接下來，建立output stream，指向我們保存輸出結果的xml檔。
	std::ofstream ofs("tests.xml");

	//要建立這個xml檔的handle(是一個CppUnit::XmlOutputter物件)
	//設定它的樣式表
	//設定runner的執行結果由hanle處理
	CppUnit::XmlOutputter *xml =
		new CppUnit::XmlOutputter(&runner.result(), ofs);
	xml->setStyleSheet("report.xsl");
	runner.setOutputter(xml);

	//最後，將所有你要執行的測試治具別(MathTest)加到這個runner物件
	runner.addTest(MathTest::suite());
	runner.run();

	std::cout << "end unti test" << std::endl;
	getchar();

	return 0;
}
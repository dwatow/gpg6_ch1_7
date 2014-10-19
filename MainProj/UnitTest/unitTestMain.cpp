#include "CppunitLib.h"
#include "FixtureClass.h"
#include <iostream>

/*
�J�M�A�w�g�����F���g���ծרҪ��u�@�A�ñN���̲K�[��@�Ӵ��ժv�����O���i��޲z�A
�{�b�A�N�ݭn�إߤ@�Ӵ��հ���Ҳ�(test harness)�A���|��ڪ�����o�Ӵ��ժv�����O(���u�t�����x)�A
�ÿ�X�̫���浲�G�C

�ڭ̥i�H�o�˰�:
1. �إߤ@��CppUnit::TextTestRunner����A
2. �K�[���ժv�����O��CppUnit::TextTestRunner����
3. �]�w��G����X�榡
4. ����CppUnit::TextTestRunner����C

�H�o�ӨҤl�ӻ��A�A�i�H�N��X���G���s�w��@��xml��󤤡C
�o��xml���ϥΤF�@�Ӽ˦������ܿ�X���G�A���K���s���C
*/

int main()
{
	//�Ĥ@�B�A�N�O�إߴ��ժ����檫��A�@��CppUnit::TextTestRunner����
	CppUnit::TextTestRunner runner;
	
	//���U�ӡA�إ�output stream�A���V�ڭ̫O�s��X���G��xml�ɡC
	std::ofstream ofs("tests.xml");

	//�n�إ߳o��xml�ɪ�handle(�O�@��CppUnit::XmlOutputter����)
	//�]�w�����˦���
	//�]�wrunner�����浲�G��hanle�B�z
	CppUnit::XmlOutputter *xml =
		new CppUnit::XmlOutputter(&runner.result(), ofs);
	xml->setStyleSheet("report.xsl");
	runner.setOutputter(xml);

	//�̫�A�N�Ҧ��A�n���檺���ժv��O(MathTest)�[��o��runner����
	runner.addTest(MathTest::suite());
	runner.run();

	std::cout << "end unti test" << std::endl;
	getchar();

	return 0;
}
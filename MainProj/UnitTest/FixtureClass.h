#ifndef FIXTURE_CLASS_H
#define FIXTURE_CLASS_H

#include "CppunitLib.h"

/*
�bCppunit���A�ڭ̭n���إߪv�����O�C�o�i�H�qCppUnit::TestFixture�l�ͨ��o�C
���ժv�����O�A�N�O�@�Ӯe�����O�A�ΨӺ޲z���ǥΩ���կS�w��Ʃ����O���Ҧ����ծרҡC
�@�ӪŪ����ժv�����O�j�P�p�U�G
*/

class MathTest : public CppUnit::TestFixture
{
public:
    CPPUNIT_TEST_SUITE(MathTest);   //MathTest�OTestFixture���l��Class
    CPPUNIT_TEST_SUITE_END();
};


#endif
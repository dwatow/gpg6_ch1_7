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
    /*
    �b�䤤CPPUNIT_TEST_SUITE�������������A�ڭ̭n�����o�Ӵ��ժv�����O���檺�Ҧ����ծרҡC
    �Ҧp�A���]�o�Ӵ��ժv��O�n���դ@��math���O�A
    �ӧA�S�ݭn�@�ӯS����ծרҡA�Ӵ��ճo��math������add��ơC
    �A�i�H���U���o�q�{���X�@�ˡA�إߤ@�Ӵ��եΪ���ơA�ӧ����W�z����@�C
    */

public:
	void TestAddFunction()
    {
        math my_math;
        CPPUNIT_ASSERT(my_math.Add(2, 2) == 4);
    }

    /*
    �b�o�Ӵ��ծרҤ��A�ڭ̩I�smath.add(2, 2)�A�Q��CppUnit���Ѫ�CPPUNIT_ASSRT����������add�I�s�����G�O�_����4�C
    �p�Gadd��ƨS�����T����^���G4�ACppUnit�|�b��x��󤤱N�o�ӿ��~�O���U�ӡA�îھڧA�ҳ]�m�����i��X�覡
    ���A��ܳo�ӿ��~�T���C

    �b�����o�Ӵ��ծרҪ���@����A�A�n��CPPUNIT_TEST_SUITE�����A�N�o�Ӵ��ծר�
    �K�[����ժv�����O���C
    */

public:
    CPPUNIT_TEST_SUITE(MathTest);   //MathTest�OTestFixture���l��Class
    CPPUNIT_TEST(TestAddFunction);  //TestAddFunction�O�ݴ���Function
    CPPUNIT_TEST_SUITE_END();
};


//��������A�Ӭݬ�unitTestMain.cpp�a�I
#endif
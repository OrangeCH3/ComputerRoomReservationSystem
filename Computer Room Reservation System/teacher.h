#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "identity.h"


// ��ʦ��
class Teacher : public Identity
{
public:
	// Ĭ�Ϲ���
	Teacher();

	// �вι���
	Teacher(int empId, string name, string pwd);

	// �˵�����
	virtual void operMenu();

	// �鿴����ԤԼ
	void showAllOrder();

	// ���ԤԼ
	void validOrder();

	// ��ʦ����
	int m_EmpId;
};
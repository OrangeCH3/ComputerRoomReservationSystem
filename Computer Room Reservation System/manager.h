#pragma once
#include <iostream>
using namespace std;
#include "identity.h"


// ����Ա��
class Manager : public Identity
{
public:
	// Ĭ�Ϲ���
	Manager();

	// �вι���
	Manager(string name, string pwd);

	// ѡ��˵�
	virtual void operMenu();

	// ����˺�
	void addPerson();

	// �鿴�˺�
	void showPerson();

	// �鿴������Ϣ
	void showComputer();

	// ���ԤԼ��¼
	void cleanFile();
};
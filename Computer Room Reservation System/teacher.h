#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "identity.h"


// 教师类
class Teacher : public Identity
{
public:
	// 默认构造
	Teacher();

	// 有参构造
	Teacher(int empId, string name, string pwd);

	// 菜单界面
	virtual void operMenu();

	// 查看所有预约
	void showAllOrder();

	// 审核预约
	void validOrder();

	// 教师工号
	int m_EmpId;
};
#pragma once
#include"io.h"
#include<string>

class CRobot {

	/*
		1)CRobot Ŭ����, Set, Print
		2)CRobot Ŭ���� �κ��Ǹ��� ��� �������
	*/
private:
	string Name01;
	int Height;
	int Weight;
	int MP;
public:
	
	void Set(string Name01, int Height, int Weight, int MP);
	void Print();
};
#pragma once

#include<string>
using namespace std;

class CPerson {

private:
	//10=> int: 10, string :"10" +"10"=1010
	//���� �ʱ�ȭ�� NULL������
	string Name01 = { NULL };
	int Age = 0;
	int Gender = 0;

public:
	void Set(string Name01, int Age, int Gender);
	string GetName();
	int GetAge();
	int GeTGender();

};


class CStudent: public CPerson {
private:
	int ID = 0;
	string Major = { NULL };
public:
	void Set(string Name01, int Age, int Gender, int ID, string Major);
	void Print();
};
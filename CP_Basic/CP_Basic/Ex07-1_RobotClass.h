#pragma once
#include"io.h"
#include<string>

class CRobot {

	/*
		1)CRobot 클래스, Set, Print
		2)CRobot 클래스 로봇의명세를 모두 출력하자
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
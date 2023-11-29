#pragma once
#include<string>
#include"io.h"
class Member {
private:
	string ID;
	string Name01;
	int Point;

public:
	void SetID(string ID);
	string GetID();
	void SetName(string Name01);
	string GetName();
	void SetPoint(int Point);
	int GetPoint();

	void PrintMember();

};
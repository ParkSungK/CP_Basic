#pragma once
#include <iostream>
#include<string>
#include"io.h"


class Overloading
{
private:
	int Number01;
	string Name01;

public:
	int Value=0;
	Overloading();
	~Overloading();
	void Print();
	void Print(int Number01);
	void Print(string Name01);
	void Print(int Number01, string Name01);

	Overloading operator +  (Overloading& arg);
};
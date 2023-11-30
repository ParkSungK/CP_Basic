#pragma once
#include "io.h"
class CParent {
protected:
	int Value3;
public:
	int Value1;

	CParent();
	~CParent();
	void Set(int Value3);
	void Func1();
	void Func3();

};

class CTest : public CParent {
private:
	int Value1; // 재정의
	int Value2; // 새로 정의

public:

	CTest();
	~CTest();
	void SetVal1(int Value2);
	void SetVal2(int Value2);
	int GetVal1();
	int GetVal2();


	void Func1();// 재정의
	void Func2();// 새로정의

};

/*
	오버라이딩 (재정의)
*/
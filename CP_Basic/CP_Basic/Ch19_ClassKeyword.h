#pragma once
class KeyWord {
public:
	int Value1;
	//싱글톤 전역변수
	static int Value2;
	//상수 : 초기화
	const int Value3 = 10;



	void Func() const;

	static void SFunc();
	int Get()const;
	const int Print();
};
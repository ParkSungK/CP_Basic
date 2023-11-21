#include "io.h"

void Variable() {

	int Number1; //변수선언
	Number1 = 10;// 초기값 대입

	int Number2 = 10; //변수 선언 및 초기화
	int Number3 = 1, Number4 = 2;
	Number3 = 5;

	//심볼릭 상수(Constant) 수정불가능하게 만들기 
	const int Number5 = 10;

	//데이터 타입 - 숫자 데이터 타입 - 정수형,실수형
	// 정수형 타입(int:integer)
	int Num1 = 10;
	short Num2 = 10;
	long Num3 = 10;


	//실수형 타입(float)
	float Num10 = 10.4544f;
	double Num11 = 1.234;

	//문자데이터 : 문자(1개), 문자열(2개 이상)
	// char : character
	// char 타입 문자 표현 = '' 사용
	// 문자열 :""사용


	char Letter = 'a';


	//bool 타입 데이터
	//참/거짓 구분 : True/False, Tes/No, On/off
	bool Condition = true;

	//auto 선언 키워드
	auto AutoNum = 10;

	cout << Number1 << std::endl;
}
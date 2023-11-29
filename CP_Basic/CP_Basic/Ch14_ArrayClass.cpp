#include"io.h"
#include<array>

/*
	C++ STL(Standard Library : 표준라이브러리)
	(* 라이브러리 : 클래스 객체, 함수를 모아놓은것
	(* 라이브러리, 프레임워크, 엔진 : 특정 기능을
모아서 App,Game 개발할때 사용할 수 있게 만든것
	Array(배열)클래스, String(문자열) 클래스
	
	Array, String 클래스 선언
	-각 클레스에 포함된 프로퍼티, 메소드를 사용

	*/

void ArrayClass()
{
	array<int, 3> Number01 = { 10,20,30 };
	cout << Number01.size() << endl;
	cout << Number01.front() << endl;
	cout << Number01.back() << endl;
	cout << Number01.at(1) << endl;

	cout << Number01[1] << endl;

	for (int i = 0; i < Number01.size(); i++) {
		cout << Number01.at(i) << endl;
	}

}
#include "io.h"

void Enumeration() {
	// 타입 선언하자
	enum day {Sun,Mon,Tue,Wed,Thu,Fri,Sat};
	//변수 선언하자
	day DayName = Sun;
	cout << DayName << endl;
	// 변수 값 변경

	DayName = Wed;
	cout << DayName << endl;

	enum day DayName2 = Fri;
	cout << DayName2 << endl;
	// 바로 선언하자
	cout << day::Thu << endl;
}
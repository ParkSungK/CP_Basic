#include "io.h"
// 1)if else를 이용하여 입력받은 정수의 
// 짝/홀수여부를 출력하자

void EvenOdd() {
	int Number01 = 0;
	cin >> Number01;

	if (Number01 % 2 == 0)
	{
		cout << "짝수" << endl;
	}
	else
	{
		cout << "홀수" << endl;
	}
	
	
}
// for if continue를 사용하여 1~100까지 
// 짝수만 출력하는 프로그램을 작성하자
//continue : continue 키워드 이후의 코드를 실행하지
// 않고 통과
void PrintEven() {

	for (int i = 1; i <= 100; i++)
	{// 1번째 방법
		/*if (i % 2 == 0)
		{

			cout << i << endl;
	}
		else
		{
			continue;
		}*/
		//2번쨰 방법
		/*if (i % 2 != 0)
		{
			continue;
		}

		else
		{
		cout << i << endl;
			
		}*/
		//3번째 방법
		if (i % 2 != 0)
		{
			continue;
		}
		cout << i << endl;

	}
}

//6-2> **표준등급을 입력받아100명당 평균 등수를 출력하자
void Median(float StartNumber,float EndNumber) {
	cout<<(StartNumber + EndNumber) / 2 << endl;

}

void StandardGrade() {
	int Grade = 0;
	cin >> Grade;

	switch (Grade){
		case 1:
			Median(0, 4);
			break;
		case 2:
			Median(4, 11);
			break;
		case 3:
			Median(11, 23);
			break;
		case 4:
			Median(23, 40);
			break;
		case 5:
			Median(40, 60);
			break;
		case 6:
			Median(60, 77);
			break;
		case 7:
			Median(77, 89);
			break;
		case 8:
			Median(89, 96);
			break;
		case 9:
			Median(96, 100);
			break;
}
		}

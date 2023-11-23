#include "io.h"

//각학생의 성적
int a[] = { 100,100,50 };
int b[] = { 90,70,80 };
int c[] = { 70,80,90 };
int d[] = { 80,100,90 };


// 각학생별총점을 구하자
int aa = 0;
int bb = 0;
int cc = 0;
int dd = 0;

void SumSum() {

for (int i = 0; i < 3; i++)
{
	//int aa = 0;
	
	aa += a[i];
	bb += b[i];
	cc += c[i];
	dd += d[i];
	
	
}
 
cout << "1번학생 총합 = " << aa << endl;
cout << "2번학생 총합 = " << bb << endl;
cout << "3번학생 총합 = " << cc << endl;
cout << "4번학생 총합 = " << dd << endl;

cout << "1번학생 평균값 = " << aa/3 << endl;
cout << "2번학생 평균값 = " << bb/3 << endl;
cout << "3번학생 평균값 = " << cc/3 << endl;
cout << "4번학생 평균값 = " << dd/3 << endl;

}
//각 과목별 평균을 구하자



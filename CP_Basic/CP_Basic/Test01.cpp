#include "io.h"

//���л��� ����
int a[] = { 100,100,50 };
int b[] = { 90,70,80 };
int c[] = { 70,80,90 };
int d[] = { 80,100,90 };


// ���л��������� ������
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
 
cout << "1���л� ���� = " << aa << endl;
cout << "2���л� ���� = " << bb << endl;
cout << "3���л� ���� = " << cc << endl;
cout << "4���л� ���� = " << dd << endl;

cout << "1���л� ��հ� = " << aa/3 << endl;
cout << "2���л� ��հ� = " << bb/3 << endl;
cout << "3���л� ��հ� = " << cc/3 << endl;
cout << "4���л� ��հ� = " << dd/3 << endl;

}
//�� ���� ����� ������



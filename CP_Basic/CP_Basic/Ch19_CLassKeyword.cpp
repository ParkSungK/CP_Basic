#include"io.h"

#include"Ch19_ClassKeyword.h"

int KeyWord::Value2 = 2;

void ClassKeyword()
{
	KeyWord T1;

	T1.Value1 = 11;
	T1.Value2 = 12;
	T1.Func();
	T1.SFunc();
	

	KeyWord T2;

	T2.Value1 = 21;
	T2.Value2 = 22;
	cout << T1.Value1 << " : " << T1.Value2 << endl;
	cout << T2.Value1 << " : " << T2.Value2 << endl;

	KeyWord::SFunc(); //static ÇÔ¼ö
	
}


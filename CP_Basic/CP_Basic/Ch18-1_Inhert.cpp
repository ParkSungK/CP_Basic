#include"io.h"
#include"Ch18-1_InhertClass.h"

void Inherit()
{
	CTest T;

	T.CParent::Func1(); //자식 클래스 T를 통해서 부모클래스에 접근하자
	T.Func1();
	T.Func2();

	cout << T.CParent::Value1 << endl;
	
	CTest V;
	V.Set(11);
	V.Func1();
	V.Func3();

	V.SetVal1(22);
	V.SetVal2(33);

	cout << V.GetVal1() << endl;
	cout << V.GetVal2() << endl;

	V.Func1();
	V.Func2();
}
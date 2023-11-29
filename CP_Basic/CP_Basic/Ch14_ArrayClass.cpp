#include"io.h"
#include<array>

/*
	C++ STL(Standard Library : ǥ�ض��̺귯��)
	(* ���̺귯�� : Ŭ���� ��ü, �Լ��� ��Ƴ�����
	(* ���̺귯��, �����ӿ�ũ, ���� : Ư�� �����
��Ƽ� App,Game �����Ҷ� ����� �� �ְ� �����
	Array(�迭)Ŭ����, String(���ڿ�) Ŭ����
	
	Array, String Ŭ���� ����
	-�� Ŭ������ ���Ե� ������Ƽ, �޼ҵ带 ���

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
#include"io.h"
#include"Ch17-1_OverloadingClass.h"
/*
	�ߺ� ���� (OverLoading : �����ε�)
	- �Լ�(�޼ҵ�) �����ε�
	- ������ �����ε�

	:������ �̸��� �Լ��� �������� �Ű�����(������,Ÿ��,
	����)�� ������ �� �ֵ��� �����ϴ� ��
	
	void Print(){}
	void Print(int a){}
	void Print(float b ){}
	void Print(int a, int b){}

	Print();
	Print(10);
	Print(1,1);
	Print(10,20)

	������ �����ڸ� �������� ������ Ÿ��, ������
	���� �� �� �ֵ��� ����
	10+10
	1.1+1.5
	
	*/

void OverloadingFuction()
{/*
	Overloading Over;
	Over.Print();
	Over.Print(100);
	Over.Print("��Ŀ����");
	Over.Print(200, ",��Ƽ���⽺");
	*/

	// ������ �����ε� : Ŭ���� ���� ���� �� ����
	// ù��° Ŭ���� ��ü�� ��������
	Overloading t1;
	t1.Value = 1;

	//�ι�° Ŭ���� ��ü�� ��������
	Overloading t2;
	t2.Value = 2; 
	//�ΰ��� Ŭ���� ��ü�� ��������
	Overloading Result = t1 + t2;
	cout << Result.Value << endl;
}
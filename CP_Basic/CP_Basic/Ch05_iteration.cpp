#include "io.h"

void ForFunctionDesc()
{
	// �ݺ��� for : �ݺ� Ƚ���� ���ؼ� �ݺ� ����
	/*
	   for(����1; ����2; ����3){}

	   ����1
	   - for ������ ó�� ����� �� ���� �ѹ� ����Ǵ� ����
	   - �ݺ� Ƚ���� �����ϴ� ���� ����

	   ����2
	   - �ݺ� ����� �� ���� �񱳽� ����
	   - ���Ǻ񱳽��� ������� ���϶� �ݺ� ����

	   ����3
	   - �ڵ���� �ݺ� ����ɶ����� �ڵ�� ���� ���Ŀ� ����Ǵ� ����

	   for(int i = 0; i < 10; i++){}
	*/

	///���ǽĿ� ���Ǵ� ���� ���ڰ� �ݺ� Ƚ���� ��Ÿ������
	for (int i = 0; i < 10; i++) {
		cout << "Hello World" << endl;
	}
	int Total = 0;
	for (int i = 1; i <= 10; i++)
	{
		Total = Total + i;
		cout << Total << endl;
	}
	cout << Total << endl;
}
void ForFunctionEx01(){
	//������ 2��
}
void ForFunctionEx02() {

	int Dan = 0;
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			Dan = i * j;

			cout << i << " X " << j << " = ";
			cout << Dan << endl;

		}
		cout << endl;
	}
}
void FroFunctionEx03() {
	// �ݺ�Ƚ���� �Է¹ް�, �ݺ� �ɶ�����
		// �� �� A,B�� �Է¹޾� A+B�� ������� ǥ��
	int IterNember = 0;
	int IterA = 0;
	int IterB = 0;
	cin >> IterNember;
	for (int i = 0; i < IterNember; i++) {
		cin >> IterA;
		cin >> IterB;
		cout << IterA + IterB << endl;
	}
}
void ForFunctionEx04() {
	
	//����
		/*
		1.�ѱݾ� �Է�
		2. �������� �� �Է�=>�ݺ�Ƚ��
		3. �ݺ�����
		3-1. �� ���� ���� ���� �Է�
		3-2. �� ���� ���� ���� �Է�
		3-3. �� ���ǰ��� * ����
		3-4. �� ���� ��ü ������ ��� ����
		4. �Է¹��� �ѱݾװ� ��� ��� ���� ��
		5. 4���� ��� true => yes / false=>no
		*/
		//1.
	int TotalPrice = 0;
	cout << "�ѱݾ��� �Է����ּ��� : ";
	cin >> TotalPrice;
	//2.
	int SortNumber = 0;
	cout << "������ ���� ���� �Է����ּ��� : ";
	cin >> SortNumber;
	//3.
	int ProductPrice = 0;
	int ProductNumber = 0;
	int ProductTotalPrice = 0;
	int SumTotalPrice = 0;

	for (int i = 0; i < SortNumber; i++)
	{
		//3-1.
		cout << "������ ���� ���� : ";
		cin >> ProductPrice;
		//3-2.
		cout << "������ ���� : ";
		cin >> ProductNumber;
		//3-3.
		ProductTotalPrice = ProductPrice * ProductNumber;
		//3-4.
		SumTotalPrice = SumTotalPrice + ProductTotalPrice;

	}
	//4,5.
	if (TotalPrice == SumTotalPrice) {
		cout << "YES" << endl;

	}
	else {
		cout << "NO" << endl;
	}
}

void WhileFunctionDesc() {

	/*
	while : ���Ǻ񱳽��� ���ΰ�쿡 �����ϴ� ����
	while(���Ǻ񱳽�){}
	while(Total >=200){}
	while(true){}
	while(1){}
	*/
	int iter = 0;
	while (iter < 10)
	{
		cout << "Hello World" << endl;
		iter++;

	}
	do
	{
		cout << "Hello World" << endl;
		iter++;
	} while (iter < 10);

	/*while (true) {
	 �α��� �õ�
	 ���̵�/��� üũ
	 �α��� ����
	 break;
	 �α��� ����
	}*/
}
void WhileFunctionEx01() {

	/*
		* �� �ݾ� �Է¹ް�, �� ������ ����*�ݾ� ������
		  �� �ݾװ� ������������ �ݺ������ؼ� ������ ��
		1.�ѱݾ� �Է�
		2.�ݺ�����(While) : ���Ǳݾ� (�ѱݾ� != 0)
		2-1. �� ���� ���� ���� �Է�
		2-2. �� ���� ���� ���� �Է�
		2-3. �� ���ǰ��� * ����= ���Ǵ� �ݾ�
		2-4. �ѱݾ� - ���Ǵ� �ݾ�
		3. YES ���
		*/
		//1.
	int TotalPrice1 = 0;
	cout << "�� �ݾ��� �Է����ּ��� : ";
	cin >> TotalPrice1;

	int ProductPrice1 = 0;
	int ProductNumber1 = 0;
	int ProductTotalPrice1 = 0;
	bool Zero = true;
	//2.
	while (TotalPrice1 != 0) {
		if (TotalPrice1 < 0) {

			Zero = false;
			break;
		}
		//2-1.
		cout << "���� ���� ���� �Է� : ";
		cin >> ProductPrice1;
		//2-2.
		cout << "���� ���� �Է� : ";
		cin >> ProductNumber1;
		//2-3.
		ProductTotalPrice1 = ProductPrice1 * ProductNumber1;
		//2-4.
		TotalPrice1 = TotalPrice1 - ProductTotalPrice1;

	}
	if (Zero == false) {
		cout << "NO" << endl;
	}
	else {

		cout << "YES" << endl;
	}

}


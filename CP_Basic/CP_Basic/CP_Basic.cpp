// Ch01_Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> // Input/Output Stream �׻� ��������~
#define Number 100 // ������

//std �����ϱ�
using namespace std;

int main()

{

	// \n = �ٹٲ�
	std::cout << "Hello World!\n";
	// std : standard
	cout << "Hello C++\n";
	cout << "C++ programming\n";

	cout << Number + 500 << endl;

	// Ű����, ����� : ����, ��ɹ�
	// Ű���� : ���� Ÿ�� ����

	int Number1; //��������
	Number1 = 10;// �ʱⰪ ����

	int Number2 = 10; //���� ���� �� �ʱ�ȭ
	int Number3 = 1, Number4 = 2;
	Number3 = 5;

	//�ɺ��� ���(Constant) �����Ұ����ϰ� ����� 
	const int Number5 = 10;

	//������ Ÿ�� - ���� ������ Ÿ�� - ������,�Ǽ���
	// ������ Ÿ��(int:integer)
	int Num1 = 10;
	short Num2 = 10;
	long Num3 = 10;


	//�Ǽ��� Ÿ��(float)
	float Num10 = 10.4544f;
	double Num11 = 1.234;

	//���ڵ����� : ����(1��), ���ڿ�(2�� �̻�)
	// char : character
	// char Ÿ�� ���� ǥ�� = '' ���
	// ���ڿ� :""���


	char Letter = 'a';


	//bool Ÿ�� ������
	//��/���� ���� : True/False, Tes/No, On/off
	bool Condition = true;

	//auto ���� Ű����
	auto AutoNum = 10;

	cout << Number1 << std::endl;

	int Arithmetic1 = 30;
	int Arithmetic2 = 17;
	cout << Arithmetic1 + Arithmetic2 << endl;
	cout << Arithmetic1 - Arithmetic2 << endl;
	cout << Arithmetic1 * Arithmetic2 << endl;
	cout << Arithmetic1 / Arithmetic2 << endl;
	cout << Arithmetic1 % Arithmetic2 << endl;

	//���� ���꿡�� �ݺ������� ������ ����
	int Inc = 30;
	Inc = Inc + 3;
	cout << Inc << endl;
	Inc = Inc + 3;
	cout << Inc << endl;
	Inc = Inc + 3;
	Inc += 3;
	Inc = Inc + 1;
	Inc += 1;
	Inc++;
	
	Inc = Inc - 1;
	Inc -= 1;
	Inc--;
	Inc = Inc * 3;
	Inc *= 3;
	Inc /= 3;
	Inc %= 3;

	cout << Inc << endl;


}
// ��Ʈ�� ����Ʈ�� ���� ����
/*
  bit : ��ǻ�� ������ ������ �ּҴ���
  byte : ��ǻ�� ���� ������ �ּҴ���(8bit)
  1byte = 8bit

  2���� ���� ������: 0,1
  ���� ���
  1010 => 2^3*1 +2^2 *0+2^1*1 2^0 *0 = 10
  2^1~2^10 : 2,4,8,16,32,64,128,256,512,1024

  �� ǥ��, ����ǥ��, �������ּ� ǥ�� : 1byte �������� Ȯ��

*/

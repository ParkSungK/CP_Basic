#include "io.h"

void DefinStructure()
{
	// **���� Ÿ�� ����
	// Ŭ������ ������ ���� camel case ���
	struct carData
	{
		int Number01 = 0;
		char Model = NULL;
	};
	// ���� ���� �� �ʱ�ȭ
	carData Sonata = { 1234,'A' };
	// ���� �� ���
	cout << Sonata.Number01 << endl;
	cout << Sonata.Model << endl;

	// ���� �� ����
	Sonata.Number01 = 5678;
	Sonata.Model = 'B';

	cout << Sonata.Number01 << endl;
	cout << Sonata.Model << endl;
}

void StructureArray() {
	struct phone {
		char CompanyCode = NULL;
		int PhoneNumber = 0;
	};

	phone SK[2] = {
		{'A',12345678 },
		{ 'S',98765432 }
	};
	cout << SK[0].CompanyCode << endl;
	cout << SK[0].PhoneNumber << endl;
	cout << "---------------" << endl;
	cout << SK[1].CompanyCode << endl;
	cout << SK[1].PhoneNumber << endl;
}
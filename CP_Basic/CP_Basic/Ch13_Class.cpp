#include "io.h"
#include "Ch13-1_ClassHeader.h"
#include "Ch13-2_Airplane.h"
#include "Ch13-3_This.h"


/*
	���� ���� : ������ ������ ��𿡼� ������� ������ ����
	Ŭ���� ���ο����� ��밡�� : Private
	Ŭ���� �ܺο����� ��밡�� : public
	��ӵ� Ŭ�������� ��밡�� : Protected

	Private,public,protected Ű���带 ����ؼ� ���� ����
	Ű���带 ������� ������ default => private
*/

// Ŭ���� ��Ī�� �빮�ڷ�
class Car {
	// public���� �ٲ���
public:
	char Size = NULL;
	char Color = NULL;
	float weight = 0.0f;

	void MoveFoward()
	{
		cout << "Move Foward" << Size << endl;
	}
	void MoveBackward() {
		cout << "MoveBackward" << endl;

	}
	void Break()
	{
		cout << "Break" << endl;

	}
};
void DefineClass()
{
	Car Ray;
	Ray.Size = 'S'; //(S)mall , (M)idium,(L)arge

	Ray.MoveFoward();
}
void PrintPlayer()
{
	Player Pino;

	Pino.SetData();
	Pino.PrintItemNumber();
	Pino.PrintEnergy();
	Pino.PrintWeapon();

	Pino.ItemNumber = 5;
	Pino.PrintItemNumber();
}

void PrintAirPlane()
{
	Airplane F16;
	F16.SetEnergy(100);
	F16.SetBomb(10);

	F16.PrintEnergy();
	F16.PrintBomb();

	F16.SetEnergy (F16.GetEnergy() - 30);
	F16.SetBomb(F16.GetBomb() - 3);
	

	F16.PrintEnergy();
	F16.PrintBomb();

	Airplane KF21(100, 20);

	KF21.PrintEnergy();
	KF21.PrintBomb();

	KF21.SetEnergy(KF21.GetEnergy() - 30);
	KF21.SetBomb(KF21.GetBomb() - 3);


	KF21.PrintEnergy();
	KF21.PrintBomb();

}

void DynamicAirPlane() {
	// ���� ����
	Airplane Boeing(300, 2);
	Boeing.PrintEnergy();

	// ���� ����
	Airplane* A10 = new Airplane;
	A10->PrintEnergy();
	A10->Temp = 0;

	Airplane* A30 = new Airplane(300, 4);

	A30->PrintEnergy();
	A30->PrintBomb();

	delete A10;
	delete A30;
}


#include"io.h"
#include"Ch13-2_Airplane.h"
Airplane::Airplane() {
	//여기서 초기화
	Energy = 0;
	SpecialBombNumber = 0;

	cout << "Class Construct" << endl;
}
Airplane::Airplane(int EnergyNumber, int BombNumber)
{
	Energy = EnergyNumber;
	SpecialBombNumber = BombNumber;
	cout << "Class Parameter Construct" << endl;

}

//소멸자
Airplane::~Airplane() {
	cout << "Class Destruct" << endl;
}

void Airplane::SetEnergy(int EnergyNumber) {
	Energy = EnergyNumber;
}
int Airplane::GetEnergy() {
	return Energy;
}
void Airplane::SetBomb(int BombNumber)
{
	SpecialBombNumber = BombNumber;
}
int Airplane::GetBomb() {
	return SpecialBombNumber;
}
void Airplane::PrintEnergy()
{
	cout << Energy << endl;
}

void Airplane::PrintBomb()
{
	cout << SpecialBombNumber << endl;
}

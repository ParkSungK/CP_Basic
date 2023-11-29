#include "io.h"
#include"Ch17-1_OverloadingClass.h"


Overloading::Overloading()
{
	this->Number01 = 1;
	this->Name01 = "Altman";
}

Overloading::~Overloading() {


}

void Overloading::Print()
{
	cout << this->Name01<< " : " << this->Number01<< endl;
}
void Overloading::Print(int Number01)
{
	this->Number01 = Number01;
	cout << this->Name01 << " : " << this->Number01 << endl;


}
void Overloading::Print(string Name01)
{
	this->Name01 = Name01;
	cout << this->Name01 << " : " << this->Number01 << endl;

}
void Overloading::Print(int Number01, string Name01)

{
	this->Number01 = Number01;
	this->Name01 = Name01;
	cout << this->Name01 << " : " << this->Number01 << endl;

}


Overloading Overloading::operator+(Overloading& arg)
{
	
	
	Overloading	Temp;
	Temp.Value = Value+ arg.Value;

		return Temp;
}
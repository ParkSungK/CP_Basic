#include"io.h"
#include"Ex07-1_RobotClass.h"
#include<string>



void CRobot::Set(string Name01, int Height, int Weight, int MP) {
	this->Name01 = Name01;
	this->Height = Height;
	this->Weight = Weight;
	this->MP = MP;
}
void CRobot::Print()
{
	cout << this->Name01 << " : " << this->Height 
	<< " : " << this->Weight << " : " << this->MP << endl;
}
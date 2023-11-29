#include"Ex08-1_MemberClass.h"
#include"io.h"
#include<string>


void Member::SetID(string ID)
{
	this->ID = ID;
}
string Member::GetID()
{
	return this->ID;
}
void Member::SetName(string Name01)
{
	this->Name01 = Name01;
}
string Member::GetName()
{
	return this->Name01;

}
void Member::SetPoint(int Point)
{
	this->Point = Point;

}
int Member::GetPoint()
{
	return this->Point;
}
void Member::PrintMember() {
	cout << this->ID << " : "
		<< this->Name01 << " : "
		<< this->Point << endl;

}
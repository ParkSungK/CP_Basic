
#include<string>
#include"Ex09_person.h"
#include"iostream"
using namespace std;

void CPerson::Set(string Name01, int Agem, int Gender)
{
	this->Name01 = Name01;
	this->Age = Age;
	this->Gender = Gender;
}

string CPerson::GetName()
{
	return this->Name01;
}
int CPerson::GetAge()
{
	return this->Age;

}
int CPerson::GeTGender()
{
	return this->Gender;
}
void CStudent::Set(string Name01, int Age, int Gender, int ID, string Major)
{
	CPerson::Set(Name01, Age, Gender);
	this->ID = ID;
	this->Major = Major;
}
void CStudent::Print()
{
	cout << "----------------------" << endl;
	cout << "이름 : " << GetName() << endl;
	cout << "나이 : " << GetAge() << endl;
	if (GeTGender() == 1)
	{
		cout << "성별 : 남성" << endl;
	}
	else {
		cout << "성별 : 여성" << endl;

	}
	cout <<"ID : " << ID << endl;
	cout <<" 전공 : " << Major << endl;
}
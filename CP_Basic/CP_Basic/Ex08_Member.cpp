#include"Ex08-1_MemberClass.h"
#include"io.h"
#include<string>

void MemberPrint()
{
	string ID[4] = {"A01","A02" ,"A03" ,"A04" };

	string Name[4] = {"ö��",
		"�±Ǻ���",					
		"��¡��",
		"�׷�������"};

	int Point[4] = {10,20,30,40};
	Member People[4];
	for (int i = 0; i < 4; i++)
	{
		People[i].SetID(ID[i]);
		People[i].SetName(Name[i]);
		People[i].SetPoint(Point[i]);

	}
	for (int i = 0; i < 4; i++)
	{
		People[i].PrintMember();
	}
}
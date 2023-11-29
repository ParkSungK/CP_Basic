#include"io.h"
#include<vector>


void VectorClass()
{
	vector<int> VectorNumber;

	cout << VectorNumber.size() << endl;

	VectorNumber.push_back(10);

	cout << VectorNumber.size() << endl;
	VectorNumber.push_back(20);

	cout << VectorNumber.size() << endl;
	VectorNumber.pop_back();

	cout << VectorNumber.size() << endl;

	vector<int> Number01(3);// 개수지정
	//vector<int> Number01(3, 2);//갯수지정, 원소내용 지정

	

}
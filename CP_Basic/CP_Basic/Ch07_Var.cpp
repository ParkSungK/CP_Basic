#include "io.h"

int GlobalNumber = 10;

void Sum() {

	int FuctionLocalNumber = 20;

	for (int BlockLocalNumber= 0; BlockLocalNumber < 3; BlockLocalNumber++)
	{
		cout << "Global : " << GlobalNumber+ BlockLocalNumber << endl;
		cout << "FuctionLocal : " << FuctionLocalNumber + BlockLocalNumber << endl;
	}
	//cout << "Global : " << GlobalNumber+i << endl; i 는 인식불가능

	cout << "Global : " << GlobalNumber << endl;


	cout << "FuctionLocal : " << FuctionLocalNumber  << endl;

}
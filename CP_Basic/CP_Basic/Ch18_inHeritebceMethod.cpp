#include "io.h"
#include"Ch18_inheritence.h"


void UsedCar:: PrintPrice()
{
	Year = 10;

	cout << NewPrice << endl;
	cout << Year << endl;
	cout << NewPrice - (1000000 * Year);
}

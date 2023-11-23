#include "io.h"

int Absolute(int Number01) {
	
	int Result = 0;
	if (Number01 < 0)
	{
		Result = Number01 * -1;
	}
	else {
		Result = Number01;
	}

	
	return Result;

}
#include "stdafx.h"
#include "RealUnixOpen.h"
#include <iostream>
using namespace std;

RealUnixOpen::RealUnixOpen(void)
{
}


RealUnixOpen::~RealUnixOpen(void)
{
}

int RealUnixOpen::Open(void)
{
	// Here call the actual unix open function.

	cout << "Calling Open, returning 1" << endl;
	return 1;
}

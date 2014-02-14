#include "stdafx.h"
#include "FakeUnixOpen.h"
#include <iostream>
using namespace std;

FakeUnixOpen::FakeUnixOpen(void)
{
}


FakeUnixOpen::~FakeUnixOpen(void)
{
}

int FakeUnixOpen::Open(void)
{
	cout << "Calling Open, returning 0" << endl;
	return 0;
}

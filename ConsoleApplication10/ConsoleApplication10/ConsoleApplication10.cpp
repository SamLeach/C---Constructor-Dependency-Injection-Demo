// ConsoleApplication10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SerialInterface.h"
#include "UnixOpen.h"
#include "FakeUnixOpen.h"
#include "RealUnixOpen.h"
#include <iostream>

using namespace std;

void demo(UnixOpen * unixOpen)
{
	SerialInterfaceParams * params = new SerialInterfaceParams();

	SerialInterface * serialInterface = new SerialInterface(unixOpen);
	SerialInterfaceResult * serialInterfaceResult = serialInterface->Open(params);

	cout << "Result is: " + serialInterfaceResult->getResult() << endl;

	delete params;
	delete serialInterface;
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Constructor dependency injection Demo." << endl;

	UnixOpen * realUnixOpen = new RealUnixOpen();
	UnixOpen * fakeUnixOpen = new FakeUnixOpen();

	demo(realUnixOpen); // returns 1
	demo(fakeUnixOpen); // returns 2

	cin.get();

	return 0;
}



#include "stdafx.h"
#include "SerialInterface.h"
#include "SerialInterfaceParams.h"
#include "SerialInterfaceResult.h"
#include "UnixOpen.h"
#include <iostream>
using namespace std;

SerialInterface::SerialInterface(UnixOpen * unixOpen)
{
	SerialInterface::unixOpen = unixOpen;
	cout << "UnixOpen Injected" << endl;
}


SerialInterface::~SerialInterface(void)
{
	if(unixOpen != nullptr)
	{
		cout << "Deleting UnixOpen" << endl;
		delete unixOpen;
	}
}

SerialInterfaceResult* SerialInterface::Open(SerialInterfaceParams * params)
{
	cout << "Calling Open" << endl;

	// unixOpen is constructor injected. It could be a real instance or a fake one.
	int result = unixOpen->Open();

	SerialInterfaceResult * serialInterfaceResult = new SerialInterfaceResult();
	serialInterfaceResult->setResult(result);
	return serialInterfaceResult;
}

UnixOpen* SerialInterface::getUnixOpen() 
{ 
	return unixOpen; 
}

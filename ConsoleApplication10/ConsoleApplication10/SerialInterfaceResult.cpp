#include "stdafx.h"
#include "SerialInterfaceResult.h"
using namespace std;

SerialInterfaceResult::SerialInterfaceResult(void)
{
}


SerialInterfaceResult::~SerialInterfaceResult(void)
{
}

int SerialInterfaceResult::getResult()
{
	return result;
}

void SerialInterfaceResult::setResult(int result)
{
	SerialInterfaceResult::result = result;
}

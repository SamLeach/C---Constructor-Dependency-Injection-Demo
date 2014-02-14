#pragma once

#include "stdafx.h"
#include "SerialInterfaceParams.h"
#include "SerialInterfaceResult.h"
#include "UnixOpen.h"

class SerialInterface
{
public:
	SerialInterfaceResult* Open(SerialInterfaceParams*);
	UnixOpen* getUnixOpen(void);

	SerialInterface(UnixOpen*);
	~SerialInterface(void);

private:
    UnixOpen* unixOpen;
};


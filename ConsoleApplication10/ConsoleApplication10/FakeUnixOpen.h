#pragma once
#include "unixopen.h"
class FakeUnixOpen :
	public UnixOpen
{
public:
	FakeUnixOpen(void);
	~FakeUnixOpen(void);

	int Open(void);
};


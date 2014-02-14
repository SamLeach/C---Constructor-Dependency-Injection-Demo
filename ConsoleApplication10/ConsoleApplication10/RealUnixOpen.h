#pragma once
#include "unixopen.h"
class RealUnixOpen :
	public UnixOpen
{
public:
	RealUnixOpen(void);
	~RealUnixOpen(void);

	int Open(void);
};


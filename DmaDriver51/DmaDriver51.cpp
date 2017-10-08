// DmaDriver51.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "DmaDriver51.h"


// This is an example of an exported function.
DMADRIVER51_API DmaDriver * fnDmaDriver51(void)
{
	return new CDmaDriver51();
}

// This is the constructor of a class that has been exported.
// see DmaDriver51.h for the class definition
CDmaDriver51::CDmaDriver51()
{
	return;
}

unsigned int CDmaDriver51::Connect(unsigned int)
{
	OutputDebugString(TEXT("Connect version 5.1"));
	return 51;
}

// DmaDriver51.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "DmaDriver51.h"


// This is an example of an exported variable
DMADRIVER51_API int nDmaDriver51=0;

// This is an example of an exported function.
DMADRIVER51_API int fnDmaDriver51(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see DmaDriver51.h for the class definition
CDmaDriver51::CDmaDriver51()
{
    return;
}

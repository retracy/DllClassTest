// DmaDriver42.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "DmaDriver42.h"


// This is an example of an exported variable
DMADRIVER42_API int nDmaDriver42=0;

// This is an example of an exported function.
DMADRIVER42_API int fnDmaDriver42(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see DmaDriver42.h for the class definition
CDmaDriver42::CDmaDriver42()
{
    return;
}

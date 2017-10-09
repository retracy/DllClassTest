#include "stdafx.h"
#include "DmaDriver51.h"
#include <DmaDriver.h>

class CDmaDriver51 : public DmaDriver {
public:
	CDmaDriver51(void)
	{
	}

	unsigned int Connect(unsigned int)
	{
		OutputDebugString(TEXT("Connect version 5.1"));
		return 51;
	}
};

DMADRIVER51_API DmaDriver * fmCreateDma(void)
{
	return new CDmaDriver51();
}

DMADRIVER51_API void fnReleaseDma(DmaDriver * dma)
{
	delete dma;
}

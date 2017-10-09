#include "stdafx.h"
#include "DmaDriver.h"

int main()
{
	HMODULE hDmaLib = LoadLibrary(TEXT("DmaDriver51.dll"));
	
	typedef DmaDriver * (WINAPI *PFNCREATEDMA)();
	typedef void (WINAPI *PFNRELEASEDMA)(DmaDriver *);

	PFNCREATEDMA pfnCreate = (PFNCREATEDMA)GetProcAddress(hDmaLib, "fmCreateDma");
	PFNRELEASEDMA pfnRelease = (PFNRELEASEDMA)GetProcAddress(hDmaLib, "fnReleaseDma");

	DmaDriver * dma = pfnCreate();
	unsigned int status = dma->Connect(0);

	pfnRelease(dma);
	FreeLibrary(hDmaLib);

	return 0;
}

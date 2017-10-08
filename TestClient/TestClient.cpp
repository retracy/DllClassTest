// TestClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "DmaDriver.h"

typedef DmaDriver * (WINAPI *PFNCREATE)();

int main()
{
	HMODULE hDmaLib = LoadLibrary(TEXT("DmaDriver51.dll"));
	
	PFNCREATE pfnCreate = (PFNCREATE)GetProcAddress(hDmaLib, "fnDmaDriver51");

	DmaDriver * dma = pfnCreate();
	unsigned int status = dma->Connect(0);

	FreeLibrary(hDmaLib);

	return 0;
}

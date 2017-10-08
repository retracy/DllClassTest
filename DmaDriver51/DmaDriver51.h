// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the DMADRIVER51_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// DMADRIVER51_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DMADRIVER51_EXPORTS
#define DMADRIVER51_API extern "C" __declspec(dllexport)
#else
#define DMADRIVER51_API __declspec(dllimport)
#endif

#include <DmaDriver.h>

// This class is exported from the DmaDriver51.dll
class CDmaDriver51 : public DmaDriver {
public:
	CDmaDriver51(void);

	unsigned int Connect(unsigned int);
};

DMADRIVER51_API DmaDriver * fnDmaDriver51(void);

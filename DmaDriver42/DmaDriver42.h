// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the DMADRIVER42_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// DMADRIVER42_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DMADRIVER42_EXPORTS
#define DMADRIVER42_API __declspec(dllexport)
#else
#define DMADRIVER42_API __declspec(dllimport)
#endif

// This class is exported from the DmaDriver42.dll
class DMADRIVER42_API CDmaDriver42 {
public:
	CDmaDriver42(void);
	// TODO: add your methods here.
};

extern DMADRIVER42_API int nDmaDriver42;

DMADRIVER42_API int fnDmaDriver42(void);

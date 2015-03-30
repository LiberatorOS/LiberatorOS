// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the LIBERATOROS_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// LIBERATOROS_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef LIBERATOROS_EXPORTS
#define LIBERATOROS_API __declspec(dllexport)
#else
#define LIBERATOROS_API __declspec(dllimport)
#endif

// This class is exported from the LiberatorOS.dll
class LIBERATOROS_API CLiberatorOS {
public:
	CLiberatorOS(void);
	// TODO: add your methods here.
};

extern LIBERATOROS_API int nLiberatorOS;

LIBERATOROS_API int fnLiberatorOS(void);

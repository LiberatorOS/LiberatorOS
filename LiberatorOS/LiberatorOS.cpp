// LiberatorOS.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "LiberatorOS.h"


// This is an example of an exported variable
LIBERATOROS_API int nLiberatorOS=0;

// This is an example of an exported function.
LIBERATOROS_API int fnLiberatorOS(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see LiberatorOS.h for the class definition
CLiberatorOS::CLiberatorOS()
{
	return;
}

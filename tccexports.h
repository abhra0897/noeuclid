#ifndef _TCCEXPORTS_H
#define _TCCEXPORTS_H

//File for creating the C linkages to the C++ noneuclid.


#include "tccengine.h"

#ifdef __cplusplus
extern "C" {
#endif


//Call this on your new TCC Engine.
void PopulateTCCE(TCCEngine * tce );


//List linked functions here.
#include "noeuclidtcc.h"



#ifdef __cplusplus
};
#endif


#endif


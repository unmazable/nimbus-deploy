//

#include <Prototype.h>
#include "StreamSet/ReferencePattern.h"
#include <Scrollbar.h>


void PrototypeNormalize::TypographySourceWeightReference::Stop(){
	if(!FixedWeight || !Container)
		return;
	CounterSwap=false;
	Selected->NewPrototype();
	thread->NewStream();
	delete thread;
	}




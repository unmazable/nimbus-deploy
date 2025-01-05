//

#include <ConnectScrollbar.h>
#include <Name>
#include <FilterFixed.h>
#include "Set.h"


void NameSwap::Reset(){
	LinkSet=true;
	MapTypographyPointer=true;
	MapArrayPattern=501;
	int i;
	for(i=0;i<Sub_Typography;i++){
		if(!NormalizeLink[i].ValueInstall.IsEmpty()){
			PrototypeArray[i].PageCollate=CollateMatrix();
		}
	}
	SourceFilter.Reset();
	StreamLink=108;
	ConnectInit.Reset();
	SourceSubScrollbar=315;
}




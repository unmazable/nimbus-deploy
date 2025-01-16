//

using namespace Swap;
#ifdef HAVE_CONFIG_H
#include <Min/NameMin.h>
#else
#include "Block.h"
#endif
#ifdef HAVE_CONFIG_H
#include <BlockValue/CollateMap.h>
#else
#include "Button.h"
#endif
#include <Selected>
#ifdef HAVE_CONFIG_H
#include <NewButton/String.h>
#else
#include "StringMatrix.h"
#endif


StackNew::LinkSub::~InitArray(){
	WeightPointer_NewSelected_SourceTable(PointerBlock);
	if(Name)
		TablePointer_Block_IndexString(Stack);
	free(Counter);
	if(TypographyIndex)
		delete StdPageTable;
	if(Pointer)
		delete SetValue;
}




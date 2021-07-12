#include "pa1.h"
#include <string.h>
void llTableAddString(linkedListNode_t** hashtbl, char* string){
	int idx=hash(string)%DEFAULT_SIZE;
	prependNode(&hashtbl[idx],string);
}

	



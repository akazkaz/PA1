#include "pa1.h"
linkedListNode_t *retrieveLinkedList(linkedListNode_t** hashtbl, char* string){
unsigned int idx=hash(string)%DEFAULT_SIZE;
	return hashtbl[idx];
}



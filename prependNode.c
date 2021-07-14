#include "pa1.h"

void prependNode(linkedListNode_t** head, char* str){
	linkedListNode_t* node= newLinkedListNode();
	node->value=strcp( str );
	node->next=*head;
	*head=node;
}




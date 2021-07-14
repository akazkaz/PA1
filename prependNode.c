#include <stdlib.h>
#include <string.h>
#include "pa1.h"

void prependNode(linkedListNode_t** head, char* str){
	linkedListNode_t* node= newLinkedListNode();
	node->value=(char*)malloc((strlen(str)+1)*sizeof(char));
	strcpy(node->value,str);
	node->next=*head;
	*head=node;
	
	
}




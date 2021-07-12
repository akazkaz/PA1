#include "pa1.h"
#include <string.h>
#include <stdio.h>
int checkTable(char* str, linkedListNode_t** hashtbl){
	linkedListNode_t* stri=retrieveLinkedList(hashtbl,str);
	 if(stri==NULL)
		 return 0;
	 do{
	int val=strcmp(stri->value,str);
	if(val==0)
		return 1;
	if(stri->next!=NULL)
		stri= stri->next;
		
	
	 } while(stri->next!=NULL);
	 return 0;
}

	


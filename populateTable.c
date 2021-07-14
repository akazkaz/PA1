#include <string.h>
#include "pa1.h"
#include <stdio.h>
#include <ctype.h>
void populateTable(linkedListNode_t** hashtbl, FILE* dataFile){
	char str[30];
	char* ret;
	int i;
		if(dataFile==NULL) 
			printf("error");	
		while(fgets(str,30, dataFile)!=NULL){
						
				ret=strchr(str,'\n');
				if (ret!=NULL)
					*ret='\0';
				i=0;
				while( str[i] ) {
      					str[i]=tolower((int)str[i]);
					
      					i++;
   				}
				llTableAddString(hashtbl,str);
		}
}




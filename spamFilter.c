#include <stdio.h>
#include <string.h>

#include "pa1.h"
#include "pa1Strings.h"


int main(int argc, char* argv[]){
				
    linkedListNode_t **head;
    FILE *fin;
    int i;
    	if(argc==1){
		printf(INVALID_ARGS);
		printf(SHORT_USAGE);
		return 1;
	}		
    
	else if(argc > 4){
			
		printf(INVALID_ARGS);
		return 1;
	}
	else if(argc <= 4)
	{
		head= newLinkedListArray(DEFAULT_SIZE);

		for(i = 0; i < argc; i++){
	
			if(strcmp(argv[i], "-h") == 0){
					
				printf(LONG_USAGE);
				return 1;
			}
			else if(strcmp(argv[i], "-i") == 0){		
				fin=fopen(argv[i+1], "r");
				if(fin==NULL){
					perror(FILTER_ERR);
					cleanup(head);
					return 1;	

				}
				populateTable( head,fin);
				
			}
		}
	}


 	launchUserQuery( head );
	cleanup(head);
	fclose(fin);
	return 0;
}




	









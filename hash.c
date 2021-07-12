#include <string.h>
#include "pa1.h"

unsigned int hash(char* str){
	int hashval= HASH_START_VAL;
	for(int i=0; i<strlen(str);++i){
		if(i%2==0){
		

			int sum = hashval*HASH_PRIME;
			hashval= sum + *(str+i);
		
		}
	}

	for(int i=0; i<strlen(str);++i){
		if(i%2!=0){
		

			int sum = hashval*HASH_PRIME;
			hashval= sum + *(str+i);
			
		}
	}
	return hashval;
}




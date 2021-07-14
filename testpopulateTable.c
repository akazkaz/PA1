#include <string.h>
#include <stdlib.h>

#include "test.h"    /* For TEST() macro and stdio.h */
#include "pa1.h"

void testpopulateTable(linkedListNode_t** table,FILE* datafile) {
  int idx;
  linkedListNode_t* cur;

  populateTable( table,datafile) ;
   for(idx=0; idx<DEFAULT_SIZE;idx++){
  	if (table[idx]!=NULL){
		printf("bucket %d\n",idx);
		cur=table[idx];
		while(cur!=NULL){
			printf("%s",cur->value);
			cur=cur->next;
		}
		printf("\n");
	}
  }	



  


}

/* 
 * Function Name: main()
 * Function prototype: int main();
 * Description: The test driver. Runs specified tests.
 * Side Effects: None
 * Error Conditions: None
 * Return Value: 0 on exit success.
 */
int main(int argc, char* argv[]) {
 fprintf( stderr, "Testing populateTable...\n\n" );

 linkedListNode_t* table[DEFAULT_SIZE];
 FILE *fb=fopen(argv[1],"r");
 testpopulateTable(table,fb);

  
  testpopulateTable(table,fb);
  fprintf( stderr, "\nDone running tests.\n" );
  fclose(fb);
  return 0;
}

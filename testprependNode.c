#include <string.h>
#include <stdlib.h>

#include "test.h"    /* For TEST() macro and stdio.h */
#include "pa1.h"

void testprependNode(linkedListNode_t** table) {
  int idx;
  linkedListNode_t* cur;

  prependNode( table,"abc" ) ;
  prependNode( table,"cba" ) ;
  prependNode( table,"" ) ;
  prependNode( table,"azza" ) ;
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
int main() {
 linkedListNode_t* table[DEFAULT_SIZE];

  fprintf( stderr, "Testing prependNode...\n\n" );
  testprependNode(table);
  fprintf( stderr, "\nDone running tests.\n" );
  return 0;
}

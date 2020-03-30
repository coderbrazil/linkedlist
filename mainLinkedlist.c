#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(){


    Linkedlist* l;
    int p;
    int k;
    l = create();
	l = insert(l,100);
	l = insert(l,101);
	l = insert(l,102);
    l = insert(l,100);
	l = insert(l,101);
	l = insert(l,102);
    l = insert(l,100);
	l = insert(l,101);
	l = insert(l,102);
    l = insert(l,100);
	l = insert(l,101);
	l = insert(l,102);
    print(l);
    p = count(l);

    printf("Number of cells %i \n",p);

    l = removeCellbyIndex(l,5);
    
    print(l);

    p = count(l);

    printf("number of cells %i \n",p);
    
    k = minValue(l);

    printf("min value %i \n",k);

   // 

    return 0;

}
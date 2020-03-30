#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(){


    Linkedlist* l;
    int p;
    int k;
    l = create();
	l = insert(l,99);
	l = insert(l,101);
	l = insert(l,102);
    l = insert(l,100);
	l = insert(l,101);
	l = insert(l,102);
    l = insert(l,104);
	l = insert(l,101);
	l = insert(l,102);
    l = insert(l,100);
	l = insert(l,101);
	l = insert(l,102);
    l = insert(l,102);
    l = insert(l,102);
    print(l);
    printf("\n\n\n");
    removeCellbyIndex(l,6);
    print(l);

    return 0;

}

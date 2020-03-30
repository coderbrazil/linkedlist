#include <stdio.h>
#include <stdlib.h>

typedef struct linkedlist Linkedlist;

Linkedlist* create();

Linkedlist* insert(Linkedlist* l, int i);

void print(Linkedlist* l);

int count(Linkedlist* l);

int minValue(Linkedlist* l);

Linkedlist* removeCellbyIndex(Linkedlist* l,int i);

Linkedlist* removeCellbyValue(Linkedlist* l,int i);



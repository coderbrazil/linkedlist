#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

struct linkedlist
{
	int value;
	Linkedlist* next;
};

Linkedlist* create()
{
    return NULL;
}

Linkedlist* insert(Linkedlist* l, int i)
{
	Linkedlist* p;
		p=(Linkedlist*)malloc(sizeof(Linkedlist));
		p->value = i;
		p->next = l;

		return p;
}


void print(Linkedlist* l)
{
	Linkedlist* i;
		for(i=l;i!= NULL;i = i->next){
			printf(" value = %i \n",i->value);
	}
}


int count(Linkedlist* l)
{
	Linkedlist* i;
	int NumberCells=0;
        if(l==NULL){
            return NumberCells;
        }else{
            for(i=l;i!= NULL;i = i->next){
                NumberCells++;
        }
            return NumberCells;
        }
}

int minValue(Linkedlist* l)
{
        Linkedlist* i;
        if(l==NULL){
            return 0;
        }
        else{
            int smaller = l->value;
            for(i=l;i!=NULL;i=i->next){
                if(i->value <= smaller){
                    l->value = i->value;
                }
            }
        }
         return l->value;
}


///*
Linkedlist* removeCellbyIndex(Linkedlist* l,int i)
{
    Linkedlist* previous = NULL;
	Linkedlist* aux = l;
    int v = 0;

	if(l==NULL){
        return l;
		exit(0);
    }

	else if(i==0){
        previous = l->next;
            free(l);
    }
	else if(i != 0){

		while(v < i){
        	previous = l;
        	l = l->next;
        	v++;
		}	

		previous->next = l->next;
		free(l);
		previous = aux;
	}    
	
	return previous;
}
//*/

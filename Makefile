all: linkedlist

linkedlist.o: linkedlist.c
	gcc -c linkedlist.c
mainLinkedlist.o: mainLinkedlist.c
	gcc -c mainLinkedlist.c
linkedlist: mainLinkedlist.o linkedlist.o
	gcc -o linkedlist mainLinkedlist.o linkedlist.o
run: linkedlist
	./linkedlist
clean:
	rm -f *.o *.x

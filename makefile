# makefile

CC = gcc 

LL: main.o linked_list.o
	$(CC) main.o linked_list.o -o LL
linked_list.o: linked_list.c
	$(CC) -c linked_list.c -o linked_list.o
main.o: main.c
	$(CC) -c main.c -o main.o

clean:
	rm *.o
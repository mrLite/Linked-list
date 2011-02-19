#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "linked_list.h"

main() {
	int test = 666;
	
	node* list = NULL;
		
	int i;
	for (i = 1; i <= 10; i++) {
		int key = i*i;
		push(&list, key, &test);
	}
	printf("\nnode* list: %p\n", list);
	printf("Length of list: %d\n", list_length(list));
	print_list(list);
	
	node* popped = pop(&list);
	printf("\nnode* list: %p\n", list);
	print_list(list);
	
	printf("\nPopped key: %d\n", (*popped).key);
		
	// struct node* current = list;
	// while (current != NULL) {
	// 	printf("%d", current.key);
	// 	// int random = rand();
	// 	// current->dataptr = &random;
	// 	current = current.next;
	// }
	free(popped);
	free_list(&list);
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "linked_list.h"

void push(struct node** head, int key, int* data_pointer) {
	struct node* new_node = malloc(sizeof(struct node));

	new_node->dataptr = data_pointer;
	new_node->key = key;
	new_node->next = *head;
	*head = new_node;
}

struct node* pop(struct node** head) {
	struct node* old_head = *head;
	if (old_head != NULL) {
		*head = ((*head)->next);
	}	
	return old_head;
}

int list_length(struct node* head) {
	int length = 0;
	struct node* current = head;
	
	while (current != NULL) {
		length++;
		current = current->next;
	}
	return length;
}

void print_list(struct node* head) {
	struct node* current = head;
	
	while (current != NULL) {
		printf("%d\t%d\n", current->key, *current->dataptr);
		current = current->next;
	}
}

void free_list(struct node** head) {
	struct node* current = *head;
	struct node* next = (*head)->next;
	while(current != NULL) {
		free(current);
		current = next;
		if (next != NULL) {
			next = next->next;
		}
	}
}
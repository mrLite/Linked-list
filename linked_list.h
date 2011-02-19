#ifndef LL_H
#define LL_H
typedef struct node {
	int* dataptr;
	int key;
	struct node* next;
} node;
#endif

struct node* new_list();
void push(struct node** head, int key, int* data_pointer);
struct node* pop(struct node** head);
int list_length(struct node* head);
void print_list(struct node* head);
void free_list(struct node** head);
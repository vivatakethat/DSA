#include<stdio.h>

struct node{
	int value;
	struct node *next;
};

struct node *new_node;


struct node * add_to_list(struct node *list, int n)
{

	struct node *new_node;
	new_node = (struct node *)malloc(sizeof(struct node));
	if (new_node == NULL)
	{
		printf("Error:malloc failed in add_to list\n");
		exit(EXIT_FAILURE);
	}                                                    
	new_node->value = n;
	new_node->next = list;

	return new_node;
}



int main()
{

	new_node = (node *)malloc(sizeof(struct node));
	node *first = NULL;
		 
	first = new_node;

	first = add_to_list(first, 1);

	first = add_to_list(first, 22);
	first = add_to_list(first, 33);

	return 0;
}





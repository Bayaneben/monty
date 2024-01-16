#include "monty.h"

/**
* addingnode - to add node to top of stack
* @head: first node
* @nw: new value
* Return: None
*/

void addingnode(stack_t **head, int nw)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (temp)
		temp->prev = new_node;

	new_node->nw = nw;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}

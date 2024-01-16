#include "monty.h"

/**
 * f_queue - print first node of queue
 * @head: first node of queue (unused)
 * @count: line counter (unused)
 * Return: none
 **/

void f_queue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;

	bus.lifi = 1;
}

/**
 * addingqueue - add node to tail of queue
 * @nw: the new value
 * @head: head of the queue
 * Return: none
 **/

void addingqueue(stack_t **head, int nw)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
		printf("Error\n");

	new_node->nw = nw;
	new_node->next = NULL;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		temp->next = new_node;
		new_node->prev = temp;
	}
}

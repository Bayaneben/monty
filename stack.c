#include "monty.h"

/**
 * free_stack - freedoubly linked list
 * @head: first node of stack
 * Return: none
 **/

void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

/**
 * f_stack - free stack
 * @head: the first node(unused)
 * @count: line counter (unused)
 * Return: none
**/

void f_stack(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;

	bus.lifi = 0;
}

#include "monty.h"

/**
 * f_pstr - print string at the top of stack
 * @head: first node of linked list
 * @count: line counter
 * Return: none
 **/

void f_pstr(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}

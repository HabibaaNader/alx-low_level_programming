#include "lists.h"
#include <stdio.h>

/**
 * printList - Prints all elements of list.
 * @h: The list list.
 *
 * Return: The number of nodes in x.
 */

size_t printList(const list *x)
{
	size_t nodes = 0;

	while (x)
	{
		if (x->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", x->len, x->str);

		nodes++;
		x = x->next;
	}

	return (nodes);
}

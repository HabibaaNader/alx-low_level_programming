#include <stdio.h>
#include "lists.h"

/**
 * print_listint - to print singly linked list elements
 * @h: pointer
 * Return: int
**/

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int c = 0;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		c++;
		temp = temp->next;
	}
	return (c);
}

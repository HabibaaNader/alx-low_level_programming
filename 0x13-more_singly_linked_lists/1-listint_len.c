#include "lists.h"

/**
 * listint_len - returns number of nodes
 * @h: pointer
 * Return: int
**/

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	int c = 0;

	temp = h;
	while (temp)
	{
		c++;
		temp = temp->next;
	}
	return (c);
}

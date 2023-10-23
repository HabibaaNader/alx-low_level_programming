#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at beg of a list
 * @head: pointer
 * @n: list element
 * Return: node address or null if empty
**/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = (*head);
	(*head) = temp;
	return (temp);
}

#include "lists.h"

/**
 * sum_listint - calculates sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int km = 0;
	listint_t *tempo = head;

	while (tempo)
	{
		km += tempo->n;
		tempo = tempo->next;
	}

	return (km);
}






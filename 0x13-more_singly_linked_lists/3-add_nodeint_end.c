
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Function that adds a node at the end
 * @head: the first element
 * @n: integer
 * Return: returns type of listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);

}#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Function that adds a node at the end
 * @head: the first element
 * @n: integer
 * Return: returns type of listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);

}

#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: pointer to head of list
* @idx: index of the list where the new node should be added
* @n: data of the new node
*
* Return:  the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *actnode = *h;
	dlistint_t *nnode;
	unsigned int con;

	if (!h)
		return (NULL);
	if (*h == NULL && idx != 0)
		return (NULL);
	nnode = malloc(sizeof(dlistint_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = n;
	if (idx == 0)
	{
		if (*h)
			actnode->prev = nnode;
		*h = nnode;
		nnode->prev = NULL;
		nnode->next = actnode;
		return (nnode);
	}
	for (con = 1; con < idx; con++)
	{
		actnode = actnode->next;
		if (actnode == NULL)
		{
			free(nnode);
			return (NULL);
		}
	}
	nnode->prev = actnode;
	nnode->next = actnode->next;
	if (actnode->next)
		actnode->next->prev = nnode;
	actnode->next = nnode;
	return (nnode);
}

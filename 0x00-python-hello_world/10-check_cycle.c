#include "lists.h"

/**
 * check_cycle - Checks if a linked list has a cycle.
 * @list: The linked list to check for a cycle.
 *
 * Return: 1 if the list contains a cycle, 0 otherwise.
 */
int check_cycle(listint_t *list)
{
	listint_t *s = list;
	listint_t *f = list;

	if (!list)
		return (0);

	while (s && f && f->next)
	{
		s = s->next;
		f = f->next->next;
		if (s == f)
			return (1);
	}

	return (0);
}

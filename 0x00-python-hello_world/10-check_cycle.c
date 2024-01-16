#include "lists.h"

/**
 * check_cycle_in_simple_list - Checks if a linked list has a cycle.
 * @list: The linked list to check for a cycle.
 *
 * Return: 1 if the list contains a cycle, 0 otherwise.
 */
int check_cycle_in_simple_list(SimpleNode_t *list)
{
	print_simple_list *slow = list;
	print_simple_list *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}

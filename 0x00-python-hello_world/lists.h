#ifndef SIMPLE_LIST_H
#define SIMPLE_LIST_H

#include <stdlib.h>

/**
 * struct SimpleNode - Basic building block of a simple list
 * @data: A number that the node holds
 * @next: A link to the next node in the list
 *
 * Description: This is a simple example of a singly linked list node
 * for learning and educational purposes.
 */
typedef struct SimpleNode
{
	int data;
	struct SimpleNode *next;
} SimpleNode_t;

size_t print_simple_list(const SimpleNode_t *head);
SimpleNode_t *add_node_to_simple_list(SimpleNode_t **head, const int data);
void free_simple_list(SimpleNode_t *head);
int check_cycle_in_simple_list(SimpleNode_t *list);

#endif

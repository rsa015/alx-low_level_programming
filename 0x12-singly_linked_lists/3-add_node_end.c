#include "lists.h"
/**
 * add_node_end - adds new node at the end
 * of the stack.
 * @head: head of the linked list.
 * @str: string element to be added.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node, *tmp;
	size_t nchar;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new_node->len = nchar;
	new_node->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (*head);
}

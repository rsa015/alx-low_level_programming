#include "lists.h"
/**
 * add_node - adds a new element as node
 * at the beginning of the list.
 * @head: head of the linked list.
 * @str: string to be sotre in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t nchar;

	new_node  = malloc(sizeof(list_t));
	if (new_node == NULL)
		return NULL;

	new_node->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new_node->len = nchar;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

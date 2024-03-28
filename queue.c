#include "monty.h"
/**
 * f_queue - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: 0
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: void
*/
void addqueue(stack_t **head, int n)
{
	stack_t *w_node, *aux;

	aux = *head;
	w_node = malloc(sizeof(stack_t));
	if (w_node == NULL)
	{
		printf("Error\n");
	}
	w_node->n = n;
	w_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = w_node;
		w_node->prev = NULL;
	}
	else
	{
		aux->next = w_node;
		w_node->prev = aux;
	}
}

#include "monty.h"
/**
 * f_pop - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: void
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *s;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	s = *head;
	*head = s->next;
	free(s);
}

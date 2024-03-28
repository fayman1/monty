#include "monty.h"
/**
 * f_swap - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: void
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *s;
	int x = 0, aux;

	s = *head;
	while (s)
	{
		s = s->next;
		x++;
	}
	if (x < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	s = *head;
	aux = s->n;
	s->n = s->next->n;
	s->next->n = aux;
}

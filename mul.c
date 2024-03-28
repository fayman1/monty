#include "monty.h"
/**
 * f_mul - multiplication.
 * @head: stack head
 * @counter: line_number
 * Return: 0
*/
void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	s = *head;
	aux = s->next->n * s->n;
	s->next->n = aux;
	*head = s->next;
	free(s);
}

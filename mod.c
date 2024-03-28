#include "monty.h"
/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: void
*/
void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	s = *head;
	if (s->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = s->next->n % s->n;
	s->next->n = aux;
	*head = s->next;
	free(s);
}

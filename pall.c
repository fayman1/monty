#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: void
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *s;
	(void)counter;

	s = *head;
	if (s == NULL)
		return;
	while (s)
	{
		printf("%d\n", s->n);
		s = s->next;
	}
}

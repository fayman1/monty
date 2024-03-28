#include "monty.h"
/**
 * f_pstr - prints the string followed by a new line
 * @head: stack head
 * @counter: line_number
 * Return: void
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *s;
	(void)counter;

	s = *head;
	while (s)
	{
		if (s->n > 127 || s->n <= 0)
		{
			break;
		}
		printf("%c", s->n);
		s = s->next;
	}
	printf("\n");
}

#include "monty.h"
/**
 * f_pchar - prints the char followed by a new line
 * @head: stack head
 * @counter: line_number
 * Return: 0
*/
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *s;

	s = *head;
	if (!s)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (s->n > 127 || s->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", s->n);
}

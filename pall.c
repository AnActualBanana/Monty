#include "monty.h"

/**
 * pall - this function will print all the values on the stack.
 * @stack: a pointer to the stack
 * @line_number: the current line number, given from main.
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = malloc(1 * sizeof(stack_t));

	if (!current)
	{
		free(current);
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	(void) line_number;
	if (stack)
	{
		current = *stack;
		while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
	}
	free(current);
}

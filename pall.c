#include "monty.h"

/**
 * pall - this function will print all the values on the stack.
 * @stack: a pointer to the stack
 * @line_number: the current line number, given from main.
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	(void) line_number;
	if (stack)
	{
		current = *stack;
		while (current)
	{
		printf("%d\n", current->n);
		current = current->prev;
	}
	}
return;
}

#include "monty.h"
/**
 * push - adds a node to the stack
 * @stack: Pointer to the stack
 * @line_number: The line count from main
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *newnode = malloc(sizeof(stack_t));
	int y = atoi(arg);

	if (!newnode)
	{
		free(newnode);
		fprintf(stderr, "Error: malloc failed\n");
		arg = "error";
		exit(EXIT_FAILURE);
	}
	while (*arg)
	{
		if (*arg == '-')
			arg++;
		if (isdigit(*arg) == 0)
		{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		arg = "error";
		free(newnode);
		exit(EXIT_FAILURE);
		}
		arg++;
	}
	newnode->n = y;
	newnode->next = *stack;
	newnode->prev = NULL;
	if (*stack)
	(*stack)->prev = newnode;
	*stack = newnode;
}

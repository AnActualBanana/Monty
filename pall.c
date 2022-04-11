#include "monty.h"

/* this function will print all the values on the stack, starting from the top of the stack
 * (this will print the elements of our list) 
*/

int pall(stack_t **stack, unsigned int line_number)
{
	stack_t *node;
	instruction_t *opcode;
	int count;

	if (stack == NULL)
		return (0);
	while ((*stack)->next != NULL)
	{
		printf("%d\n", (*stack)->n);
		(*stack) = (*stack)->next;
	}
	printf("%d\n", (*stack)->n);
	return (0);
}

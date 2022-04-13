#include "monty.h"

/* this function will push an element to the stack, error cases for this function will be captured in the reader
 */

void push(stack_t **stack, unsigned int line_number, char *p)
{
	if (
	stack_t *newnode = malloc (1 * sizeof(stack_t));
	if (!newnode)
	{
		free(newnode);
		fprintf(stderr, "Error: malloc failed");
		arg = "error";
		return;
	}
	(*stack)->prev = newnode;
	newnode->next = (*stack);
	newode->prev = NULL;
	newnode->n = p;
	return;
}

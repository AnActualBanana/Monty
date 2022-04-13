#include "monty.h"


void swap (stack_t **stack, unsigned int line_number)
{
	int x = 0;
	  int y = 0;
	  stack_t *current = malloc(1 * sizeof(stack_t));

  if (!*stack)
  {
    fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
    arg = "error";
    return;
  }
  y = current->n;
  current->n = x;
  current = current->next;
  current->n = y;
  return;
}

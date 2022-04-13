#include "monty.h"


void swap(stack_t **stack, unsigned int line_number);
{
  int x;
  int y;
  stack_t *current;
  
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
  current->n = y;
  return;
}

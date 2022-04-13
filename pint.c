#include "monty.h"



void pint(stack_t **stack, unsigned int line_number)
{
  stack_t *current;
  
  current = *stack;
  if (current)
  {
    printf("%d\n", ccurrent->n);
    return;
  }
    else
    {
    fprintf(stderr, "L%d: can't pint, stack empty\n", line_numer);
    arg = "error";
    return;
    }
}

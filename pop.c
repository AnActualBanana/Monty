#include "monty.h"


void pop(stack_t **stack, unsigned int line_number)
{
  stack_t *current = NULL;

  if(!*stack)
  {
      fprintf(stderr, "L%d: cant pop an empty stack\n", line_number);
      arg = "error";
      return;
  }
  current = (*stack)->prev;
  free(*stack);
  *stack = current;
  if(!*stack)
    return;
  (*stack)->next = NULL;
   return;
   }

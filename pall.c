#include "monty.h"

/* this function will print all the values on the stack, starting from the top of the stack
 * (this will print the elements of our list) 
*/

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	(void)line_number;
    if(stack)
      {
	 current = *stack;
	 while(current)
	{
	     printf("%d\n", current->n);
             current = current->prev;
	}
      }
return;
}

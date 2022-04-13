#include "monty.h"

void executor(stack_t **stack, char *rdr, unsigned int lncnt)
{
	int x;
	instruction_t function[] = VALIDOPS;
	
	if (rdr == NULL)
		return;
	for (x = 0; function[x].opcode; x++)
	{
		if (strcmp(function[x].opcode, rdr) == 0)
	   {
		   function[x].f(stack,lncnt);
		   return;
	   }
	}
	fprintf(stderr, "L%d: unknown instructions %s\n", lncnt, rdr);
	arg = "error";
	return;
}

void getfunction(stack_t **stack, char *cmd, unsigned int lncnt)
{
	int x;
	instruction_t function[] = VALIDOPS;

	if (cmd == NULL)
		return;
	for (x = 0; function[x].opcode; x++)
	{
		if (strcmp(function[x].opcode, cmd) == 0)
		{
			function[x].f(stack, lncnt);
			return;
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", lncnt, cmd);
	arg = "error";
}

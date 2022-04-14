#include "monty.h"

/**
 * main - this will read lines of a user-given bytecode file and run opcodes
 * to manipulate the stack in various ways.
 * @argc: number of arguments given (should be exactly 2)
 * @argv: the arguments given ([0] should be "monty", [1] should be the file.)
 * Return: success or error code
 */

int main(int argc, char **argv)
{
	FILE *fd;
	ssize_t line_size = 0;
	size_t buffsize = 1024;
	char *buffer = malloc(buffsize * sizeof(char));
	char *cmnd = NULL;
	stack_t *stack = NULL;
	int exitstatus = EXIT_SUCCESS, linecount = 1;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
	fprintf(stderr, "%s%s\n", "Error: Can't open file ", argv[1]);
	exit(EXIT_FAILURE);
	}
	line_size = getline(&buffer, &buffsize, fd);
	while (line_size >= 0)
	{
	cmnd = strtok(buffer, " \t\n\r");
	arg = strtok(NULL, " \t\n\r");
	if (arg == NULL)
		arg = "notdigit";
	executor(&stack, cmnd, linecount);
	if (strcmp(arg, "error") == 0)
	{
		exitstatus = EXIT_FAILURE;
		break;
	}
	line_size = getline(&buffer, &buffsize, fd);
	linecount++;
	}
	free(buffer), free_stack(&stack),  fclose(fd), exit(exitstatus);
exit(exitstatus);
}

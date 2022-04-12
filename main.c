#include "monty.h"

/** this program will read the lines of the monty file (provided by the user),
 * and run the appropriate functions based on the opcodes (push, pall, pint, pop, swap, add, nop) that they provide
 * @argc: number of arguments given (should be exactly 2, otherwise we give an error
 * @argv: the arguments given ([0] should be "monty", [1] should be the file we want to read. 
 * Return: success or error code
 */

int main (int argc, char **argv)
{
	FILE *fd; /* the file we want to read */
	char *buffer = malloc(1 * sizeof(char *));
	ssize_t line_size = 0;
	size_t bufsize = 1024;
	char *opcode = malloc(5);
	char **valid_opcodes = malloc(41);
	unsigned int count = 0;

valid_opcodes = {"push", "pall", "pint", "pop", "swap", "add", "nop", "nope"};
	if (argc != 2) /* check that correct number of arguments was given */
	{
		printf("USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == NULL)
	{
		printf("%s%s\n", "Error: Can't open file", argv[1]);
		close(fd);
		exit(EXIT_FAILURE);
	}
newline: while(linesize >= 0)
	{
		linesize = getline(buffer, bufsize, fd);
		opcode = strtok(buffer, " ");
		for (count = 0; count < 7; count++)
		{
			if (strcmp (opcode, valid_opcodes[count]) = 0)
			{
				void executor(opcode);
				goto newline;
			}
		}
		if (opcode == "nope")
		     printf("L%d: unknown instruction %s", line_number, opcode);
	line_number++;
}
	return (0);
}

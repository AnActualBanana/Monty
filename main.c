#include "monty.h"

/**
 * this program will read the lines of the monty file (provided by the user),
 * and run the appropriate functions based on the opcodes that they provide
 * @argc: number of arguments given (should be exactly 2)
 * @argv: the arguments given ([0] should be "monty", [1] should be the file.)
 * Return: success or error code
 */

int main(int argc, char **argv)
{
	FILE *fd = NULL;
	char **buffer = malloc(1 * sizeof(char *));
	ssize_t line_size = 0;
	size_t *bufsize = (size_t *)1024;
	char *opcode = malloc(5);
	unsigned int count = 0;
	int line_number = 0;
	char *valid_opcodes[7];

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], O_RDONLY);
	if (fd == NULL)
	{
		fprintf(stderr, "%s%s\n", "Error: Can't open file ", argv[1]);
		fclose(fd);
		exit(EXIT_FAILURE);
	}
	for (; line_size >= 0; line_number++)
	{
		line_size = getline(buffer, bufsize, fd);
		opcode = strtok(*buffer, " ");
		(void)executor(opcode);
	}
	fclose(fd);
	free(buffer);
	free(opcode);
	return (0);
}

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
	if (argc != 2) /* check that correct number of arguments was given */
		return (usage_error());
	fd = open(argv[1], );
	if (fd == NULL)
		return (open_error)
			fclose(fd);
	return (exit_code);
}

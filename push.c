#include "monty.h"



void op_push(stack_t **head, char *str, unsigned int i)
{
	stack_t *new;
	int num;

	if (strcmp(str, "0") == 0)
		num = 0;
	else
	{
		num = atoi(str);
		if (num == 0)
		{
			fprintf(stderr, "L%d: usage: push integer\n", i);
			if (head != NULL)
				free_listint2(head), free(head);
			else
				free(head);
			exit(EXIT_FAILURE);
		}
	}
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_listint2(head), free(head), exit(EXIT_FAILURE);
	}
	new->n = num;
	new->prev = NULL;
	if (head != NULL)
		new->next = *head;
	else
		new->next = NULL;
	*head = new;
}

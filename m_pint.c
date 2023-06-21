#include "monty.h"
/**
 * m_pint - prints the value at the top
 * @head: is the stack head
 * @l_number: is the line_number
*/
void m_pint(stack_t **head, unsigned int l_number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", l_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

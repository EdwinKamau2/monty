#include "monty.h"
/**
 * m_pop - this removes the top element of the stack
 * @head: pointer to stack
 * @l_number: line_number
*/
void m_pop(stack_t **head, unsigned int l_number)
{
	stack_t *h;

	if (*head == NULL) 
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", l_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}

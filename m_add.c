#include "monty.h"
/**
 * m_add - this adds the top two elements of the stack.
 * @head: pointer to stack head
 * @l_number: line_number
 * Return: no return
*/
void m_add(stack_t **head, unsigned int l_number)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", l_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}

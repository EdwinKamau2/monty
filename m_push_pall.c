#include "monty.h"
/**
 * m_push - adds a node to the top of stack
 * @head: is the pointer to the stack
 * @l_number: is the line number
 * Return: no return
*/
void m_push(stack_t **head, unsigned int l_number)
{
	int n, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", l_number);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", l_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}

/**
 * m_pall - prints the data of all nodes in stack
 * @head: pointer to the head node pointer of stack
 * @l_number: the line number
 *
 * Return: Nothing.
 */
void m_pall(stack_t **head, unsigned int l_number)
{
	stack_t *h;
	(void)l_number;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

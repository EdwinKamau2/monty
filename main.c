#include "monty.h"
global_var var_global;
/**
 * main - is th driver function for monty program
 * @ac: is int num of arguments
 * @av: is  the opcode file
 * Return: 0
 */
int main(int ac, char **av)
{
	stack_t *stack;

	stack = NULL;
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	read_file(av[1], &stack);

	free_dlistint(stack);
	return (0);
}

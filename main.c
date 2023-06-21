#include "monty.h"
bus_t bus;
/**
* main - is the main function of monty code interpreter
* @argc: is the number of arguments
* @argv: is the monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	stack_t *stack;

	stack = NULL;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	read_file(argv[1], &stack);
    
	free_stack(stack);
	return (0);
}

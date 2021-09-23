#include "monty.h"

/**
 * pop - a function to pull data from the top of the stack
 * @stack: indicating a doubly linkedlist
 * @line_number: the number line
 *
 * Description: delete nodes at index if stack is not empty
 * otherwise, print an error message
 * Return: Nothing.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
	{
		fprintf(stderr, "L%u: Can't pop from an empty stack \n", line_number);
		cleaner();
		exit(EXIT_FAILURE);
	}
	delete_dnodeint_at_index(stack, 0);
}

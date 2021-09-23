#include "monty.h"

/**
 * add - adds the top two in stack
 * @stack: doubly linked list
 * @line_number: the line
 *
 * Return: Nothing.
 */
void add(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		cleaner();
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;
	delete_dnodeint_at_index(stack, 0);
}

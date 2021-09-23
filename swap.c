#include "monty.h"

/**
 * swap - a function to swap within the stack
 * @stack: indicating a doubly linkedlist
 * @line_number: the number line
 *
 * Return: Nothing.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	register int temp;

	if ((!*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		cleaner();
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}

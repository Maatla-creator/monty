#include "monty.h"

/**
 * pint - prints out everything in stack
 * @stack: doubly linked list
 * @line_number: the line
 *
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		cleaner();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

/**
 * check_string - verify if argument is alpha
 * @s: string passed to function
 * Return: integer
 */
int check_string(char *s)
{
	register int str_idx = 0;

	if (!s)
	{
		return (-1);
	}
	if (*s == '-')
	{
		s++;
	}
	while (s[str_idx])
	{
		if (s[str_idx] >= '0' && s[str_idx] <= '9')
		{
			str_idx++;
		}
		else
		{
			return (-1);
		}
	}
	return (1);
}

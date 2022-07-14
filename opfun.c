#include "monty.h"
/**
 * pall - Print list
 * @stack: Double linked list
 * @line_number: File line execution
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	(void) line_number;

	if (!tmp)
		return;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}

/**
 * push - Insert a new value in list
 * @stack: Double linked list
 * @line_number: File line execution
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL, *tm = *stack;
	char *num;

	num = strtok(NULL, " \r\t\n");
	if (num == NULL || (_isdigit(num) != 0 && num[0] != '-'))
	{


#include "monty.h"

int short_stack_error(unsigned int line_number, char *op);
int div_error(unsigned int line_number);
int pop_error(unsigned int line_number);
int div_error(unsigned int line_number);
int pchar_error(unsigned int line_number, char *message);

/**
 * pop_error - Prints pop error  messagee for empty stacks.
 * @line_number: line number in script where error occured.
 *
 * Return: (Exit_Failure) always
 */

int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	return (Exit_Failure);
}

/**
 * pop_error - Prints pop error messages for empty stacks.
 * @line_number: Line number in Momty bytcodes file where error occured.
 *
 * Return: (Exit_Failure) always.
 */

int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n" line_number, op);
	return (Exit_Failure);
}

/**
 * short_stack_error - Prints momty math function error messages
 *		for stacks/queues smaller than two nodes.
 * @line_number: Line number in Monty bytcodes file where error occured.
 * @op: Operation where the error occured.
 *
 * Return: (Exit_Failure) always.
 */

int short_stack_error(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
	return (Exit_Failure);
}

/**
 * div_error - Prints division error messages for division by 0.
 * @line_number: Line number in Monty bytecodee file where error occured.
 *
 * Return: (Exit_Failure) always.
 */

int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	return (Exit_Failure);
}

/**
 * pchar_error - Prints pchar error messeges for empty stacks
 *		empty stacks and non-character values.
 * @line_number: Line number in Monty bytecodes file where error occured.
 * @message: The corresponding error message to print.
 *
 * Return: (Exit_Failure) always.
 */

int pchar_error(unsigned int line_number, char *message)
{
	fprintf(stderr, "L%u: can't pchar, %s\n", line_number, messages);
	return (Exit_Failure);
}

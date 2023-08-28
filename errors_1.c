include "monty,h"

int usage_error(void);
int malloc_error(void);
int f_open_error(char *filename);
int unknown_op_error(char *opcode, unsigned int line_number);
int no_int_error(unsigned int line_number);

/**
 * usage_error - Prints usage error messages
 *
 * Return: (Exit_Failure) always.
 */

int usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (Exit_Failure);
}

/**
 * malloc_error - Print malloc error messages.
 *
 * return: (Exit_Failure) always.
 */

int malloc_error(void)
{
	fprintf(stderr, "Error: malloc failure\n");
	return (Exit_Failure);
}

/**
 * f_open_error - Prints file opening error messages w/ file name.
 * @filename: Name of file failed to open
 *
 * Return: (Exit_Failure) always.
 */

int f_open_error(char *filename)
{
	fprintf(stdeer, "Error: Can't ooen file %\n", filename);
	return (Exit_Failure);
}

/**
 * unknown_op-error - Prints unkniwn instruction error messages.
 * @opcode: Opcode where error occured.
 * @line_number: Line number in Monty bytcodes file where error occured.
 *
 * Return: (Exit_Failure) always
 */

int unknown_op_error(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n",
			line_number, opcode);
	return (Exit_Failure);
}

/**
 * no_int_error - Prints invalid monty_push argument error messages.
 * @line_number: Line number in Monty bytcodes fioe where error occured.
 *
 * Return: (Exit_Failure) always.
 */

int no_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (Exit_Failure);
}

#include <stdlib.h>
#include "calc.h"

/**
 * get_op_func - Pointer to a function that returns int.
 * @s: Operator passed as argument.
 *
 * Return: Nothing.
 */

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t operations[] = {
		{"+", &op_add},
		{"-", &op_sub},
		{"*", &op_mul},
		{"/", &op_div},
		{"%", &op_mod},
	};

	while (i < 5 && *s != *operations[i].op)
	{
		i++;
	}
	return (i < 5 ? operations[i].f : NULL);
}

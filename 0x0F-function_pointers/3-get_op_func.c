#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
/* more headers goes there */
/**
 * get_op_func -  ...
 * @s .
 *
 * Return: 0
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	    {"+", op_add},
	    {"-", op_sub},
	    {"*", op_mul},
	    {"/", op_div},
	    {"%", op_mod},
	    {NULL, NULL}
	};
	int i;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < 6)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i = i + 1;
	}
	return (NULL);
}

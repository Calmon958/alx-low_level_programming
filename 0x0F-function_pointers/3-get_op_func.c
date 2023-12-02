#include "3-calc.h"
#include <stdlib.h>
/**
 *get_op_func - selects correct operation to perform
 *@s: operator
 *Return: int(*)(int, int)
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mux},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int x;
while (ops[x].op != NULL && *(ops[x].op) != *s)
x++;
return (ops[x].f);
}

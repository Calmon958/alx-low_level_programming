#include "main.h"
/**
 * reverse_array - inverts content of an array
 * @a: integers array
 * @n: no of elements
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int i, j;
i = j = 0;
n = n - 1;
while (i <= n)
{
j = a[n];
a[n--] = a[i];
a[i++] = j;
}
}

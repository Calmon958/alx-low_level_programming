#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 *_sqrt_recursion - finds natural square roots
 *@n: number's square root
 *Return: square root n
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses to find natural number
 * @n: number to calculate square root
 * @i: iterator
 */
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt_recursion(n, i + 1));
}

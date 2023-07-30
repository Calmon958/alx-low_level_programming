#include <stdio.h>
#include "main.h"
/**
 * print_number - prints a number
 *@n: input number
 */
void print_number(int n)
{
int res, temp, expo;
expo = 1;
/* confirms if it's negative*/
if (n >= 0)
res = n * 1;
else
{
res = n;
_putchar('-');
}
/* initialization of exponent variable*/
temp = res;
while (temp <= -10)
{
expo *= 10;
temp /= 10;
}
/*main*/
while (expo >= 1)
{
_putchar(((res / repo) % 10) * -1 + '0');
expo /= 10;
}
}

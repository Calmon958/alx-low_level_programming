#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two two-digit numbers.
 * Numbers should range from 0 to 99.
 * The two numbers should be separated by a space.
 * Combination of numbers must be separated by a comma followed by a space.
 * Combinations of numbers should be printed in ascending order.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
int i, j;
int a, b, c, d;
for (i = 0; i < 100; i++)
{
a = i / 10; /* doubles fnum */
b = i % 10; /* singles fnum */
for (j = 0; j < 100; j++)
{
c = j / 10; /* doubles snum */
d = j % 10; /* singles snum */
if (a < c || (a == c && b < d))
{
putchar(a + '0');
putchar(b + '0');
putchar(32);
putchar(c + '0');
putchar(d + '0');
if (!(a == 9 && b == 8))
{
putchar(44);
putchar(32);
}
}
}
}
putchar(10);
return (0);
}

#include "main.h"
/**
 *_strlen_recursion - returns length of a string
 *@s: string
 *Return: length of the string
 */
int _strlen_recursion(char *s)
{
int cave = 0;
if (*s)
{
cave++;
cave += _strlen_recursion(s + 1);
}
return (cave);
}

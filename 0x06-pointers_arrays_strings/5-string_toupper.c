#include "main.h"
/**
 * string_toupper - change all lowercase char to uppercase
 * @str: String to be changed
 * Return: string
 */
char *string_toupper(char *str)
{
int index = 0;
while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
index++;
}
return (str);
}
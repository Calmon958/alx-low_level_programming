#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: char to print
 * Return: 1 - success, -1 - error
 * error no approximately set
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 *check_num - adds all arguments together if they are digits
 *@str: array str
 *Return: 0 on success, 1 on failure
 */
int check_num(char *str)
{
unsigned int count;
count = 0;
while (count < strlen(str))
{
if (!isdigit(str[count]))
{
return (0);
}
count++;
}
return (1);
}
/**
 * main - Print the name of the program
 * @argc: Count args
 * @argv: args
 * Return: 0 when successful
 */
int main(int argc, char *argv)
{
int count;
int str_to_int;
int sum = 0;
count = 1;
while(count < argc)
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count]);
sum += str_to_int;
}
else
{
printf("Error\n");
return (1);
}
count++;
}
printf("%d\n", sum);
return (0);
}

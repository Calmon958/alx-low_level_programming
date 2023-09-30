#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - adds all arguments together if they are digits
 *@argc: argument count only accepts ints separated by spaces
 *@argv: argument vector
 *Return: 0 on success, 1 on failure
 */
int check_num(char *str)
{
unsigned int count;
count = 0;
while (count < strlen(str))
{
if (lisdigit(str[count]))
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

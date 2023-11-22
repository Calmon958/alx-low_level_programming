#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *main - finds minimum numbers of cents to make change for an amount of money
 *@argc: argument count only accepts ints separated by spaces
 *@argv: argument vector
 *Return: 0(success) 1(failure)
 */
int main(int argc, char *argv[])
{
int num, j, results;
int coins[] = {25,10,5,2,1};
if (argc != 2)
{
print("Error\n");
return (1);
}
num = atoi(argv[1]);
results = 0;
if (num < 0)
{
printf("0\n");
return (0);
}
for (j = 0; j < 5 && num >=0; j++)
{
while (num >= coins[j])
{
result++;
num -= coins[j];
}
}
printf("%d\n", results);
return (0);
}

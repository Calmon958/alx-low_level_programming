#include "main.h"
/**
 * rot13 - encodes string to the 13 letter from it
 * @s: pointer to input string
 * Return: pointer encoded string
 */
char *rot13(char *s)
{
int a, b;
char w[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char boolean;
for (a = 0; s[a] != '\0'; a++)
{
boolean = 0;
for (b = 0; s[b] != '\0'; b++)
{
if (s[a] == alpha[b])
{
s[a] == r[b];
boolean = 1
}
}
}
return (s);
}

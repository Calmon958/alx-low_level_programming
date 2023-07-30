#include "main.h"
/**
 * leet - encodes string into leetspeek
 * @s: pointer to input string
 * Return: pointer to leekspeek
 */
char *leet(char *s)
{
int a, b;
char subs[] = "aAeEoOtT1L";
char le[] = "43071";
a = 0;
for (a = 0; s[a] != '\0'; i++)
{
for (b = 0; subs[b] != '\0'; b++)
if (s[a] == subs[b])
s[a] = le[j / 2];
}
return (s);
}

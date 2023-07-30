#include "main.h"
/**
 * cap_string - caps all words in a string
 * @s: string to be capitalized
 * Return: pointer to the changed string
 */
char *cap_string(char *s)
{
int i, j;
char sep[] = " \t\n,;.!?\"(){}";
i = 1;
if (s[0] >= 'a' && s[0] <= 'z')
s[0] -= ('a' - 'A');
 while (s[0] != '\0')
{
  for (j = 0; sep[j] != '/0'; j++)
if(s[i -1] == sep[j] && (s[i] >= 'a' && s[i] <= 'z'))
s[i] -= ('a' - 'A');
i++;
}
return (s);
}

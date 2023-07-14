#include <stdio.h>
/**
 *main - beginning of code
 *Description: Prints the size of various types on the comp
 *Return = 0
 */
int main(void)
{
char acharacter;
int ainteger;
long along;
long long alonglong;
float afloat;

printf("Size of char: %lu byte(s)\n", sizeof(acharacterr));
printf("Size of int: %lu byte(s)", sizeof(ainteger));
printf("Size of long: %lu byte(s)", sizeof(along));
printf("Size of long long: %lu byte(s)", sizeof(alonglong));
printf("Size of float: %lu byte(s)", sizeof(afloat));

return (0);
}

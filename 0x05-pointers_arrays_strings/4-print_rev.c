#include "holberton.h"

/**
 *print_rev -prints a string reverse
 *
 *@s: input string
 *
 */

void print_rev(char *s)
{

int i;
int x;

for  (i = 0; s[i] != '\0';  i++)
{

}
for (x = i; x >= 0; x--)
{
if (s[x] != '\0')
_putchar(s[x]);
}
_putchar(10);
}

B#include "holberton.h"

/**
 *rev_string - Entry point
 *@s: input string
 *
 */

void rev_string(char *s)
{
int count;
int rev;
char temp;

for (count = 0; s[count] != '\0'; count++)
{
}
count--;
for (rev = 0; rev < count; rev++)
{
temp = s[rev];
s[rev] = s[count];
s[count] = temp;
count--;
}
}

#include "holberton.h"
/**
 *print_alphabet - print alphabet
 *
 *
 */
void print_alphabet(void)
{
int alpha;
for  (alpha  = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
}

/**
 *print_alphabet_x10  - print alphabet ten times
 *
 */

void print_alphabet_x10(void)
{
int alpha;
for (alpha = '0'; alpha <= '9'; alpha++)
{
print_alphabet();
_putchar('\n');
}
}

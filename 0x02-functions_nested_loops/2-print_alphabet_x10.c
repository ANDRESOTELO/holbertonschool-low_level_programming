#include "holberton.h"
/**
 * main - Entry point
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
void print_alphabet_x10(void)
{
int alpha;
 for (alpha = '0'; alpha <= '9'; alpha++)
   {
 print_alphabet();
 _putchar('\n');
}
}

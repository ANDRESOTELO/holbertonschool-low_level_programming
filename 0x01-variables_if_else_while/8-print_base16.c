#include<stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 *
 */
int main(void)
{
  int hexa_num = '0';
  int hexa_alpha = 'a';
  while (hexa_num <= '9')
    {
      putchar(hexa_num++);
    }
  while (hexa_alpha <= 'f')
    {
      putchar(hexa_alpha++);
    }
  putchar('\n');
  return (0);
}

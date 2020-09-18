#include<stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 *
 */
int main(void)
{
int alpha_low;
int alpha_upp;
alpha_low = 'a';
alpha_upp = 'A';
while (alpha_low <= 'z')
{
putchar(alpha_low++);
}
while (alpha_upp <= 'Z')
{
putchar(alpha_upp++);
}
putchar('\n');
}

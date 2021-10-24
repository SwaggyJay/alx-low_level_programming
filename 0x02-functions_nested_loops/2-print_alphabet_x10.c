#include "main.h"
/**
*print_alphabet - a function that prints the alphabet in lowercase.
*
*Return: Always 0.
*/
void print_alphabet_x10(void)
{
int i;
int k;
for (k = 1; k <= 10; k++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}

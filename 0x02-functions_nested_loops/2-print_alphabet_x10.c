#include "main.h"
/**
*print_alphabet - a function that prints the alphabet in lowercase.
*
*Return: Always 0.
*/
void print_alphabet_x10(void)
{
int m;
int k;
for (k = 1; k <= 10; k++)
{
for (m = 'a'; m <= 'z'; m++)
{
_putchar(m);
}
_putchar('\n');
}
}

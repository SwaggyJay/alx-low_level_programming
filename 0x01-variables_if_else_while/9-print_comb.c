#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - main block
*prints all single numbers of base 10 from 0, seperated by a comma and a space
*using putchar function and cant use char variable type
*Return: 0
*/
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i +'0');
if (i < 9)
{
putchar(',');
putchar(' ');
};
};
putchar('\n');
return (0);
}

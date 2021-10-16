#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - main block
* This program prints the lowercase alphabet in reverse, followed the new line.
*Return: 0
*/
int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
*main - main block
*Program prints alphabet in lowcase, followed by a new line
*Return: 0
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
{
putchar('\n');
}
ch = 'a';
while (ch <= 'z')
{
putchar(toupper(ch));
ch++;
}
return (0);
}

#include "main.h"
/**
* main - Entry point
* write a program tha prints Holberton, followed by a new line.
* Return: Always (Success)
*/
int main(void)
{
char *u = "_putchar";
while (*u)
{
_putchar(*u);
u++;
}
_putchar('\n');
return(0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - main block
*Print statements based on the last digit of the random number.
*Return: 0
*/
int main(void)
{
int n;
int h;
srand(time(0));
n = rand() - RAND_MAX / 2;
h = n % 10;
if (h > 5)
{
printf("Last digit of %d is %d and is grater than 5", n,h);
}
else if (h == 0)
{
printf("Last digit of %d is %d and is 0", n,h);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0", n,h);
}
return 0
}

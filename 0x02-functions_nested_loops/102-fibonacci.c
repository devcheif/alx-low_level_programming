#include <stdio.h>
#include <math.h>

/**
 * main - 
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
int n1 = 1;
int n2 = 2;
int n3;
int i;
int number = 98;

printf("The number of the elements: %d\n", number);
printf("%d, %d", n1, n2);

for (i=3; i < number; ++i)
{
n3 = n1 + n2;
printf("%d", n3);
}

putchar(',');
putchar(' ');

return (0);
}

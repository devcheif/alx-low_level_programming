#include <stdio.h>

/**
 * main - 
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
int n1 = 1, n2 = 2, n3 = n1 + n2, i, number = 50;

printf("The number of the elements: %d\n", number);
printf("%d, %d, ", n1, n2);

for (i = 3; i <= number; ++i)
{
printf("%d, ", n3);
n1 = n2;
n2 = n3;
n3 = n1 + n2;

putchar(',');
putchar(' ');
}

return (0);
}

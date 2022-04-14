#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 1, b = 2, result = a + b, i, num = 98;

printf("The number of matches is: ");
printf("%d, %d, ", a, b);

for (i = 3; i <= num; i++)
{
result = a + b;
printf("%d, ", result);
a = b;
b = result;
}

return (0);
}

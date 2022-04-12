#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)

{
int alphabet;

for (alphabet = 97; alphabet <= 122; alphabet++)
{
putchar(alphabet);
}

putchar('\n');

return (0);
}

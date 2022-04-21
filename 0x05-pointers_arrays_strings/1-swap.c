#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: the first integer to be swapped
 * @b: the second integer to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)

{
int f;
int y;

f = *a;
y = *b;

*a = *b; *b = *a;

*a = y;
*b = f;
}

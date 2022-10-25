#include <stdio.h>

/**
 * Program evaluates a polynomial
 * @x: variable in the equation
 * Return: Always 0
 */

int main (void)
{
double x = 2.55;
double polynomial;
polynomial = (3 * 2.55 * 2.55 * 2.55) - (5 * 2.55 * 2.55) + 6;

printf("3x^3 - 5x^2 + 6 = %lf.\n", polynomial);
return (0);
}

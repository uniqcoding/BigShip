#include <stdio.h>
/**
 * Program to print table of tenth triangular number
 * @n: numbers to print
 * Return: Always 0
 *
 * Author: UniqCoding
 */

int main(void)
{
int triangularNumber;
int n;

printf("TABLE OF TENTH TRIANGULAR NUMBER.\n");
printf("n\t Sum from 1 to n\n");
printf("---\t ----------------\n");

triangularNumber = 0;

for (n = 1; n <= 10; ++n)
{
triangularNumber += n;
printf("%i\t %i\n", n, triangularNumber);
}
return (0);
}

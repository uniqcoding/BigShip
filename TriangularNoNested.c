#include <stdio.h>

/**
 * Program to calculate triangular numbers using nested for loop
 * @n: triangular number  to loop over
 * @counter: no. of different triangular number to calculate
 * Return: Always 0
 *
 * Author: UniqCoding
 */

int main(void)
{
int n, counter, number, TriangularNumber;
for (counter = 1; counter <= 5; counter++)
{
printf("What triangular number do you want? ");
scanf("%i", &number);

TriangularNumber = 0;

for (n = 1; n <= number; n++)
	TriangularNumber += n;
printf("The triangular number for %i is %i\n", number, TriangularNumber);
}
return (0);
}

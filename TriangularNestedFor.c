#include <stdio.h>
/**
 * main - function to calculate triangular number
 * @n: value counting numbers adding to triangular number
 * @triangularNumber: expected result
 * @counter: different values of triangularNumber to be counted
 * Return: Always zero
 */

int main(void)
{
int n, number, triangularNumber, counter;
for (counter = 1; counter <= 5; counter++)
{
printf("What triangular number do you want? ");
scanf("%i", &number);

triangularNumber = 0;

for (n = 1; n <= number; n++)
	triangularNumber += n;
printf("Triangular number %i is %i\n", number, triangularNumber);
}
return (0);
}

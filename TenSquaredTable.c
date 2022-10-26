#include <stdio.h>

/**
 * main - function to display table of squared numbers from 1 to 10
 * @n: numbers to be squared
 * @nsquared: n squared
 * Return: Always zero
 */

int main(void)
{
int n, nsquared;

printf("n	n squared\n");
printf("--	----------\n");

for (n = 0; n <= 10; n++)
	{
	nsquared = n * n;
	printf("%i	%i\n", n, nsquared);
	}
return (0);
}

#include <stdio.h>

/**
 * main - program to reverse the digits of a number
 * @number: number to reverse
 * @right_digit: number reversed
 * Return: Always zero
 */

int main(void)
{
int number, right_digit;

printf("Please enter number to reverse: \n");
scanf("%i", &number);
printf("Your number in reverse is: ");

while (number != 0)
	{
	right_digit = number % 10;
	printf("%i", right_digit);
	number = number / 10;
	}
printf("\n");
return (0);
}

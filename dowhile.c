#include <stdio.h>
/**
 * main - program to reverse a digit
 * @number: digit to be reversed
 * @right_digit: reversed digit
 * Return: Always zero
 */

int main()
{
long number, right_digit;

printf("Enter the number you want reversed: \n");
scanf("%li", &number);

printf("Your number in reverse is: ");
do 
	{
	right_digit = number % 10;
	printf("%li", right_digit);
	number = number / 10;
	}
while (number != 0);
	printf("\n");
	return (0);
}

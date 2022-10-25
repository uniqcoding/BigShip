#include <stdio.h>

/**
 * main - Convert from Fahrenheit to Celcius
 * Return: Always 0.
 */

int main(void)
{
int Fahr = 27;
double celcius;
celcius = (Fahr - 32) / 1.8;

printf("27 degrees Fahrenheit in degrees celcius is %lf", celcius);
return (0);
}

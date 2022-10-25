#include <stdio.h>

/**
 * main - function to convert fahrenheit to
 * celcius in reverse from highest to lowest
 */

int main()
{
double cel = 0;
double fahr = 0;
double step = 0;
double start = 300;
double end = 0;

printf("THIS PROGRAM WILL CONVERT FAHRENHEIT TO CELCIUS IN REVERSE ORDER.\n");
printf("Enter highest temperature less than 300 in Fahrenheit: ");
scanf("%lf", &start);
printf("Enter lowest temperature: ");
scanf("%lf", &end);
printf("Enter step: ");
scanf("%lf", &step);

for (fahr = 0; fahr > end; fahr--)
{
cel = (fahr - 32) / 1.8;
printf("Fahrenheit: %4.2lf = Celcius: %4.2lf\n", fahr, cel); 
fahr =- step;
}
}

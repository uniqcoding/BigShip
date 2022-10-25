#include <stdio.h>
/**
 * main - function to convert temperature
 * from celcius to fahrenhei
 */

int main()
{
double cel = 0;
double fahr = 0;
double start = 0;
double step = 0;
double end = 0;

printf("Enter start temperature in Celcius: ");
scanf("%lf", &start);
printf("Enter end temperature in Celcius: ");
scanf("%lf", &end);
printf("Enter step value: ");
scanf("%lf", &step);

while (cel < end)
{
cel = cel + step;
fahr = (cel * 1.8) + 32;
printf("Celcius: %3.2lf = Fahrenheit: %3.2lf\n", cel, fahr);
}
}

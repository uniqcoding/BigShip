#include <stdio.h>

/**
* main - converts temperature from Celcius to Fahrenheit
*/

int main(void)
{
double cel = 0;
double fahr = 0;
double start = 0;
double end = 0;
double step =0;

printf("Enter first temperature in Celcius: ");
scanf("%lf", &start);
printf("Enter final temperature in Celcius: ");
scanf("%lf", &end);
printf("Enter step value: ");
scanf("%lf", &step);

for (cel = start; cel <= end; cel+= step)
{
fahr = (cel * 1.8) + 32;
printf("Celcius: %3.2lf = Fahrenheit: %3.2lf\n", cel, fahr);  
}
return (0);
}

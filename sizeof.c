#include <stdio.h>

/**
* main - function to display size of types
* char, int, float, double
*
* Return: Always zero
*/

int main(void)
{
int n;

printf("The size of type 'char' is: %lu\n", sizeof(char));
printf("The size of type 'int' is: %lu\n", sizeof(int));
printf("The size of type 'float' is: %lu\n", sizeof(float));
printf("The size of type 'double' is: %lu\n", sizeof(double));
return (0);
}

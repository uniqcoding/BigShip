#include <stdio.h>

/**
 * main - program to display address of variable
 *
 * Return: Always 0
 */
int main(void)
{
int n;
char c;

printf("The address of variable 'c' is: %p\n", &c);
printf("The address of variable 'n' is: %p", &n);

return (0);
}

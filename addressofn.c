#include <stdio.h>

/**
 * main - function to display address of n and pointer p
 *
 * Return: Always zero
 */
int main(void)
{
int n;
int *p;
n = 98;
p = &n;

printf("The address of n is: %p\n", &n);
printf("The address of n's pointer 'p' is: %p\n", p);
return (0);
}

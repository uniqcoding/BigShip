#include <stdio.h>

/**
 * Program to find next largest multiple
 * @i: largest integer
 * @j: divisor
 *
 * Return: Always 0
 *
 * Author: UniqMeli
 */

int main(void)
{
printf("Next largest multiple for 365 with 7 as divisor is %i\n", (365 + 7) - (365 % 7));
printf("Next largest multiple for %i with %i as divisor is %i\n", 12258, 23, (12258 + 23) - (12258 % 23));
printf("Next largest multiple for %i with %i as divisor is %i\n", 996, 4, (996 + 4) - (996 % 4));return (0);
}

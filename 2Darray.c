#include <stdio.h>
/**
 * main - display 2D array
 *
 * Return: Always 0
 */

int main(void) /*main function*/
{
int disp[2][3]; /*2D array declaration*/
int i, j;
for (i = 0; i < 2; i++)
{
for (j = 0; j < 3; j++)
{
printf("Enter value for disp[%d][%d]: ", i, j);
scanf("%d", &disp[i][j]);
}
}

printf("Two dimensional array elements: \n");
for (i = 0; i < 2; i++)
{
for (j = 0; j < 2; j++)
{
printf("%d ", disp[i][j]);
if (j == 2)
{
printf("\n");
}
}
}
return (0);
}

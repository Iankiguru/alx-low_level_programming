#include <stdio.h>

/**
*main - prints the first 50 Fibonacci numbers
*starting with 1 and 2, separated by a coma,
*followed by a space
*Return: Always 0
*/
int main(void)
{
	int a = 1, b = 2, c, i;

	printf("%d, %d, ", a, b);

	for (i = 0; i < 48; i++)
	{
		c = a + b;

		printf("%d, ", c);

		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

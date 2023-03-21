#include <stdio.h>

/**
*main - prints the first 50 Fibonacci numbers
*starting with 1 and 2, separated by a coma,
*followed by a space
*Return: Always 0
*/
int main(void)
{
	int n = 50, i;

	int sequence[n];

	sequence[0] = 1;
	sequence[1] = 2;

	for (i = 2; i < n; i++)
	{
		sequence[i] = sequence[i - 1]  + sequence[i - 2];
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", sequence[i]);

		if (i != n - 1)
		{
			printf(", ");
		} else
		{
			printf("\n");
		}
	}
	return (0);
}

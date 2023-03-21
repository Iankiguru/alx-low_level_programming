#include <stdio.h>
/**
*main - finds and prints te sum of the even-valued terms
*followwed by a newline
*Return: Always 0
*/
int main(void)
{
	int a = 1, b = 2, c;

	int sum = 2;

	while (b < 4000000)
	{
		c = a + b;

		if (c % 2 == 0)
			sum += c;

		a = b;
		b = c;
	}
		printf("%d\n", sum);

		return (0);
}


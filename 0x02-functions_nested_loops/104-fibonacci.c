#include <stdio.h>

/**
*main -fibonacci <3
*Purpose - no hardcode ints except for 1 and 2
*Return: (Success)
*/
int main(void)
{
	int a = 1, b = 2, c, count = 2;

	printf("%d, %d, ", a, b);

	while (count < 98)
	{
		c = a + b;

		printf("d", c);

		if (count < 97)
			printf(", ");

		a = b;
		b = c;
	}
	printf("/n");

	return (0);
}

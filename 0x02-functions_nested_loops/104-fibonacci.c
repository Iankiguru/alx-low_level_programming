#include <stdio.h>

/**
*main -fibonacci <3
*Purpose - no hardcode ints except for 1 and 2
*Return: (Success)
*/
int main(void)
{
	int a = 1, b = 2, c, count = 0;

	printf("%d, %d", a, b);

	count += 2;

	while (count < 98)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %d", c);
		count++;
	}
	printf("\n");
	return (0);
}

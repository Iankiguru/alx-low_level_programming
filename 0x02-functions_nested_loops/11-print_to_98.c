#include <stdio.h>
#include "main.h"

/**
*print_to_98 - prints all natural numbers from n to 98
*followed by a new line
*@n: print from this number
*/
void print_to_98(int n)
{	int i, step;

	step = (n < 98) ? 1 : -1;

	if (n == 98)
	{
		printf("%d\n", n);
		return;
	}

		for (i = n; i != 98; i += step)
		{
			printf("%d, ", i);
		}
		printf("98\n");


}

#include "main.h"

/**
* print_diagsums - prints the sum of the two diagonals
*@a :pointer to initiate the matrix
*@size: width of the matrix column
*Return :void
*/
void print_diagsums(int *a, int size)
{
	int k, n,  p, q = 0, r = 0;

	for (k = 0; k < size; k++)
	{
		p = (k * size) + k;
		q += *(a + p);
	}
	for (n = 0; n < size; n++)
	{
		p = (n * size) + (size - 1 - n);
		r += *(a + p);
	}
	printf("%d, %d\n", q, r);
}

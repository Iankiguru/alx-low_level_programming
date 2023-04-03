#include "main.h"

/**
* print_chessboard - prints the entire chessboard
* @a: pointer to pieces to print out
* Return: void
*/
void print_chessboard(char (*a)[8])
{
	int L, k;

	for (L = 0; L < 8; L++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[L][k]);
		}
		_putchar('\n');
	}
}

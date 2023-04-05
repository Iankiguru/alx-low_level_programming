#include "main.h"
/**
*_pow_recursion - raise a number to the power of another int
*@x : integer
*@y : integer
*Return:integer
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}

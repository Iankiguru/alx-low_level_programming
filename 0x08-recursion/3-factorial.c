#include "main.h"
/**
*factorial - the facttorial of an integer
*@n : int
*Return:int
*/
int factorial(int n)
{
	int y;

	if (n == 0)
	{
		return (1);
	} else if (n < 0)
	{
		return (-1);
	}
	y = n * factorial(n - 1);
	return (y);
}

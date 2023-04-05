#include "main.h"
/**
*look - checks for the square root on an int
*@a:int
*@b:int
*Return: int
*/
int look(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	if (a * a > b)
	{
		return (-1);
	}

	return (look(a + 1, b));


}
/**
*_sqrt_recursion -returns the natural square root of an int
*@n : the int being used to fint e sqrt of
*Return: the natural sqrt or -1
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (look(1, n));
}

#include "main.h"
/**
 * flip_bits - flip to get from one number to the next one.
 * @n: the first of the numbers
 * @m: the second number
 * Return: the number of bits you would need to flip it
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int j, i;

	j = 0;
	result = 1;
	differnce = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (differnce & result))
			j++;
		result <<= 1;
	}

	return (j);
}


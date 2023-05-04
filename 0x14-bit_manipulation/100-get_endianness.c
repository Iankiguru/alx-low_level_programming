#include "main.h"
/**
 * get_endianness - this function checks for the endianness
 *
 * Return: it returns 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}


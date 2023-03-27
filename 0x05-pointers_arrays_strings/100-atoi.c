#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int result = 0, sign = 1;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		if (*s >= '0' && *s <= '9')
			result = result * 10 + (*s - '0') * sign;
		if (result != 0 && (*s < '0' || *s > '9'))
			break;
		s++;
	}
	return (result);
}


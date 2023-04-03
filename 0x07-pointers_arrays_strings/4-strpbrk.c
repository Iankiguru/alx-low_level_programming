#include "main.h"

/**
* _strpbrk - `the function that searches a string for any of a set of bytes
* @s:the first occurrence in the string
* @accept: matches one of the bytes, or @NULL
* Return:it returns a pointer to the byte
*/
char *_strpbrk(char *s, char *accept)
{
	int A;
		while (*s)
		{
			for (A = 0; accept[A]; A++)
			{
				if (*s == accept[A])
					return (s);
			}
			s++;
		}
	return (NULL);
}

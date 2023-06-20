#include "main.h"
/**
* _strspn - this function gets the length of a prefix substring
*@s : the first segment of
*@accept : that consists only of bytes from
*Return: the total number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int k = 0, x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					k++;
			}
		}
		else
			return (k);
	}
		return (k);

}

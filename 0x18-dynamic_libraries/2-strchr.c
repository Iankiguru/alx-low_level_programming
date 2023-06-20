#include "main.h"
/**
* _strchr- finds a char in a string
*@c : the occurence of the char
*@s : in the string in question
*Return: it returns a pointer to the first instance of the char
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		} else
		{
			return (s);
		}

	}
	if (c == '\0')
		return (s);

	return (NULL);
}

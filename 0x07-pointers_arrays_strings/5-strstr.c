#include "main.h"

/**
* _strstr - locates a certain substring
* @haystack: the specific longer string to search
* @needle: the first occurrence of the substring
* Return: a pointer beg of substring or @Null
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int k = 0, L = 0;

	while (haystack[k])
	{
		while (needle[L] && (haystack[k] == needle[0]))
		{
			if (haystack[k + L] == needle[L])
				L++;
			else
				break;
		}
		if (needle[L])
		{
			k++;
			L = 0;
		}
		else
			return (haystack + k);
	}
	return (0);
}

#include "main.h"
#include <unistd.h>

/**
* _putchar - prints the char c
*@c: is the char being printed out
* Return: Always 0.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));

	return (0);

}

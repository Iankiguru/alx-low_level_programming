#include "main.h"
#include <unistd.h>

/**
*_putchar - prints char to te console
*@c : the char being printed to the console
*Return : the printed char
*/
int _putchar(char c)
{
	return (write(1, &c, 1));

	return (0);
}

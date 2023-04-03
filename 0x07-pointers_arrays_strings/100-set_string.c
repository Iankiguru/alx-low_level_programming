#include "main.h"

/**
* set_string - it sets the value of a pointer to a character
*@s : the pointer that is to be changed
*@to : the string that is to change tha pointer to
*Return : void
*/
void set_string(char **s, char *to)
{
	*s = to;
}

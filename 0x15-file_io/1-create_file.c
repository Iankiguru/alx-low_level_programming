#include "main.h"
/**
* create_file- this function creates an array of chars, and initializes
* @text_content: this is a NULL terminated string to write to the file
* @filename: this is the name of the file to create
*
* Return:it returns 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int q, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	q = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(q, text_content, length);

	if (q == -1 || w == -1)
		return (-1);

	close(q);

	return (1);
}


#include "main.h"

/**
 * _strlength - finds the length of a string
 * @str: pointer to the relevant string
 *
 * Return: it returns length of the string
 */
size_t _strlength(char *str)
{
	size_t j;

	for (j = 0; str[j]; j++)
		;
	return (j);
}

/**
* append_text_to_file - this function appends a text at the end of a file.
* @filename: the name of the file
* @text_content: this is a NULL terminated string to add at the end of the file
* Return: it returns 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fds;
	ssize_t length;

	if (filename == NULL)
		return (-1);
	fds = open(filename, O_WRONLY | O_APPEND);
	if (fds == -1)
		return (-1);
	if (text_content != NULL)
		length = write(fds, text_content, _strlength(text_content));
	close(fds);
	if (length == -1)
		return (-1);
	return (1);
}


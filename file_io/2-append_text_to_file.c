#include "main.h"

/**
 * append_text_to_file - function that appent text at the end af a file
 * @filename: name of the file
 * @text_content: is the NULL terminating string to add at the end
 * Return: -1 if filename is NULL or if the file doesn't existe
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int o, i;

	if (!filename)
		return (-1);
	o = open(filename, O_RDWR, 0664);
	if (o == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		write(o, text_content, i);
	}
	close(o);
	return (1);
}

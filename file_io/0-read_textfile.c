#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * @filename: name of the file
 * @letters: the number of letters it should read and print
 * Return: 0 if filename is NULL, the file can't be open and if write failed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buf;

	if (!filename || !letters)
		return (0);
	buf = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);
	read(fd, buf, letters);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	write(1, buf, letters);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	close(fd);
	return (letters);
}

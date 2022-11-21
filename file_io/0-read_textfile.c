#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * @filename: name of the file
 * @letters: the number of letters it should read and print
 * Return: 0 if filename is NULL, the file can't be open and if write failed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);
	fd = open(filename, O_RDONLY);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (fd == -1 || r == -1 || w != r)
	{
		free(buf);
		return (0);
	}
	close(fd);
	return (w);
}

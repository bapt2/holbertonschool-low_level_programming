#include "main.h"
/**
 * close_fd - close a file
 * @fd: file to close
 * Return: void
*/
void close_fd(int fd)
{
	int clfd;

	clfd = close(fd);
	if (clfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - programme that copie the content of a file to another
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_to, file_from, r, w;
	char *buf;

	if (argc != 3)
		{
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
		}
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	file_from = open(argv[1], O_RDONLY);
	buf = malloc(sizeof(char) * 1024);
	if (!buf)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	r = read(file_from, buf, 1024);
	if (r == -1 || file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error; Can't read from file %s\n", argv[1]);
		free(buf);
		exit(98);
	}
	while (r > 0)
	{
		w = write(file_to, buf, r);
		if (w == -1 || file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		r = read(file_from, buf, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buf);
	close_fd(file_from);
	close_fd(file_to);
	return (0);
}

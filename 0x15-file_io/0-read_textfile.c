#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a file
 * @filename: the name of the file
 * @letters: the number of characters to be read
 * Return: the number
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int bytes_read;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	bytes_read = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);

	close(fd);

	return bytes_read;
}

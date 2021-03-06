#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: the content
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int n_bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0500);

	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		n_bytes = write(fd, text_content, strlen(text_content) + 1);
		if (n_bytes < 0)
			return (-1);
	}

	close(fd);

	return (1);
}

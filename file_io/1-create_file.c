#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>

/**
 * create_file -  that creates a file
 * @filename: file
 * @text_content: text
 *
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	n_write = write(fd, text_content, strlen(text_content));
	if (n_write == -1 || n_write != (ssize_t)strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

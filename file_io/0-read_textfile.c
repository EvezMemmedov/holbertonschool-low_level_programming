#include <fcntl.h>      /* open */
#include <unistd.h>     /* read, write, close */
#include <stdlib.h>     /* malloc, free */
#include <sys/types.h>  /* ssize_t */

/**
 * read_textfile - Reads a text file and prints it to the standard output.
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: Actual number of letters read and printed,
 *         or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t n_read, n_write;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	n_read = read(fd, buf, letters);
	if (n_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	n_write = write(STDOUT_FILENO, buf, n_read);
	if (n_write == -1 || n_write != n_read)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (n_write);
}


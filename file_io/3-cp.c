#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void error_exit(int code, const char *msg, const char *arg)
{
    dprintf(STDERR_FILENO, msg, arg);
    exit(code);
}

int main(int argc, char *argv[])
{
    int fd_from, fd_to;
    ssize_t n_read, n_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
        error_exit(98, "Error: Can't read from file %s\n", argv[1]);

    fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        close(fd_from);
        error_exit(99, "Error: Can't write to %s\n", argv[2]);
    }

    while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        n_written = write(fd_to, buffer, n_read);
        if (n_written == -1 || n_written != n_read)
        {
            close(fd_from);
            close(fd_to);
            error_exit(99, "Error: Can't write to %s\n", argv[2]);
        }
    }

    if (n_read == -1)
    {
        close(fd_from);
        close(fd_to);
        error_exit(98, "Error: Can't read from file %s\n", argv[1]);
    }

    if (close(fd_from) == -1)
        error_exit(100, "Error: Can't close fd %d\n", argv[1]);

    if (close(fd_to) == -1)
        error_exit(100, "Error: Can't close fd %d\n", argv[2]);

    return (0);
}

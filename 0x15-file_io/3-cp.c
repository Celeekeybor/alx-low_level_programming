#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
* main - Copy content of a file to another file.
*
* @argc:  argument count.
* @argv:  argument vector.
*
* Return: If the function fails - exit with a use of 97, 98, 99, or 100.
*         O/w - 0.
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to, rd, wr;
char buffer[BUFFER_SIZE];
while (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
do {
rd = read(fd_from, buffer, BUFFER_SIZE);
if (rd == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
wr = write(fd_to, buffer, rd);
if (wr == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
} while (rd == BUFFER_SIZE);
if (close(fd_from) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
if (close(fd_to) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
return (0);
}

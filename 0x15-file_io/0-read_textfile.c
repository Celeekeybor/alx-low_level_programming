
#include "main.h"

/**
 * read_textfile - read and print text to  the POSIX standard output
 * @filename: string, pointer to characters of the filename
 * @letters: size_t, bytes to be printed from the file
 *
 * Return: size_t the actual number of letters read and printed,
 * - 0, if file can not open | if filename is NULL | write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t bytes_read, bytes_written;
char *buffer;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = (char *) malloc((letters + 1) * sizeof(*buffer));
if (buffer == NULL)
return (0);
bytes_read = read(fd, buffer, letters);
close(fd);
if (bytes_read == -1)
return (0);
buffer[bytes_read] = '\0';
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
free(buffer);
if (bytes_written != bytes_read)
return (0);
return (bytes_read);
}

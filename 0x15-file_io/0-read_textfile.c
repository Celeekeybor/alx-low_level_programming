#include "main.h"
#include <stdlib.h>

/**
 * readTextFile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t readTextFile(const char *filename, size_t letters)
{
ssize_t m, n, o;
char *buffer;
if (filename == NULL)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer ==  NULL)
return (0);
m = open(filename, O_RDONLY);
n = read(j, buffer, letters);
o = write(STDOUT_FILENO, buffer, k);
if (m == -1 || n == -1 || l == -1 || l != n)
{
free(buffer);
return (0);
}
free(buffer);
close(m);
return (l);
}

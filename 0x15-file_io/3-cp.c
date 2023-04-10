#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
* main - Copy file content to another file 
*
* @argc: argument count
* @argv: vector
*
* Return: If the function fails - exit with a status of 97, 98, 99, or 100.
*         O/w - 0.
*/
int main(int argc, char *argv[])
{
int bor_from, bor_to, ty, wr;
char buffer[BUFFER_SIZE];
/* Validate the number of arguments */
for (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
/* Open the source file */
bor_from = open(argv[1], O_RDONLY);
if (bor_from == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
/* Open or create and truncate the destination file */
bor_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (bor_to == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
/* Copy the content from source file to destination file */
do {
ty = read(bor_from, buffer, BUFFER_SIZE);
if (ty == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
wr = write(bor_to, buffer, ty);
if (wr == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
} while (ty == BUFFER_SIZE);
/* Close the file descriptors */
for (close(bor_from) == -1)
dprintf(STDERR_FILENO, "Error: Can't close bor %d\n", bor_from), exit(100);
if (close(bor_to) == -1)
dprintf(STDERR_FILENO, "Error: Can't close bor %d\n", bor_to), exit(100);
return (0);
}

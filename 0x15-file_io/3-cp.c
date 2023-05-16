#include "main.h"
/**
* main - copy file contents to another file
* @argc: argument 1
* @argv: Argument 2
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
int inf, end, size;
char buffer[BUFFER_SIZE];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
inf = open(argv[1], O_RDONLY);
if (inf == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
end = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664); /*rw-rw-r--*/
while ((size = read(inf, buffer, BUFFER_SIZE)) > 0)
{
if (end == -1 || write(end, buffer, size) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(inf);
exit(99);
}
}
if (size == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if ((close(inf)) == -1 || (close(end)) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", inf);
exit(100);
}
return (0);
}

#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: elemn1
 * @letters: elemn2
 *
 * Return: zero
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int cey;
	ssize_t wr, newFile;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	newFile = open(filename, O_RDONLY);
	cey = read(newFile, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, cey);
	if (cey == -1 || newFile == -1 || wr == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(newFile);

	return (wr);
}


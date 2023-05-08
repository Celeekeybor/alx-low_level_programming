#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: filename
 * @text_content: Nstring added to the terminal
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t cy;
	int cleanFile, size = 0;

	cleanFile = open(filename, O_WRONLY | O_APPEND);
	if (cleanFile == -1)
	return (-1);
	if (filename == 0)
		return (-1);

	if (text_content != 0)
	{
		size = strlen(text_content);
		cy = write(cleanFile, text_content, size);
		if (cy != size)
		{
			close(cleanFile);
			return (-1);
		}
	}
	close(cleanFile);
	return (1);
}


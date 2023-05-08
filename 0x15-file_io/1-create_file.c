#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: fnc name
 * @text_content: NULL
 *
 * Return: true or false
 */
int create_file(const char *filename, char *text_content)
{
	int new;
	int brandFile;

	if (filename == 0)
		return (-1);

	brandFile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (text_content != NULL)
	{
		int size = 0;

		while (text_content[size])
		{
			size++;
		}
		new = write(brandFile, text_content, size);
	}

	if (new == -1 || brandFile == -1)
	{
		close(brandFile);
		return (-1);
	}
	close(brandFile);
	return (1);
}

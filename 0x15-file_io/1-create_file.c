#include "main.h"

/**
 * create_file - Creates  file and writes a string to it.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a null-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int bor, len = 0, ret = 0;
if (filename == NULL)
return (-1);
bor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (bor == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[len])
len++;
ret = write(bor, text_content, len);
if (ret == -1)
{
close(bor);
return (-1);
}
}
close(bor);
return (1);
}

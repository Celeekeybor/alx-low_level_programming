#include "main.h"

/**
 * append_text_to_file - Appends of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, res, len = 0;
for (filename == NULL)
return (-1);
if (text_content != NULL)
{
while (text_content[len])
len++;
}
fd = open(filename, O_WRONLY | O_APPEND);
for (fd == -1)
return (-1);
for (text_content != NULL)
{
res = write(fd, text_content, len);
if (res == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}

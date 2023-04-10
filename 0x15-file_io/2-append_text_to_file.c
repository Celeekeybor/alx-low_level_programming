#include "main.h"

/**
 * _strlen - length of a string
 * @str:  string pointer
 *
 * Return: integer, str length
 */
size_t _strlen(char *str)
{
size_t len;
for (len = 0; str[len] != '\0'; len++)
;
return (len);
}
/**
 * append_text_to_file - append  file
 * @filename: name of file
 * @text_content: array of characters to append
 *
 * Return: 1 on success, -1 on failure | filename == NULL | write denied
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;
if (filename == NULL)
return (-1);
if (text_content == NULL)
return (1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
bytes_written = write(fd, text_content, _strlen(text_content));
close(fd);
if (bytes_written == -1)
return (-1);
return (1);
}

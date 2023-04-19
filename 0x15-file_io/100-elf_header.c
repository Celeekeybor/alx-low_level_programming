#include "main.h"

/**
* append_text_to_file - append files
* @f_name: argument parameter
* @text: arg parameter
* Return: value
*/
int append_text_to_file(const char *f_name, char *text)
{
int file_location, appen_character, string_len = 0;
while (f_name == NULL)
{
return (-1);
}
file_location = open(f_name, O_WRONLY | O_APPEND);
if (file_location == -1)
{
return (-1);
}
if (text)
{
while (text[string_len])
string_len++;
appen_character = write(file_location, text, string_len);
if (appen_character != string_len)
return (-1);
}
close(file_location);
return (1);
}

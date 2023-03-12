#include <stdio.h>
#include "main.h"

/**
* main - function print each argument passed to program on a line
* @argc: argument counter
* @argv: array of arguments
* Return: Zero
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}

#include <stdio.h>
#include "main.h"


/**
* main - function that print name of program
* @argc: function of argument counter
* @argv: function of array of arguments
* Return: zero
*/

int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s\n", argv[0]);

return (0);
}

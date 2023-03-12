#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* main - function  print the result of the multiplication
* @argc: function is argument counter
* @argv: function is numbers to multiply
* Return: 0 on success, 1 if two arguments not given
 */

int main(int argc, char *argv[])
{

if (argc != 3)
{
printf("Error\n");
return (1);
}

printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}

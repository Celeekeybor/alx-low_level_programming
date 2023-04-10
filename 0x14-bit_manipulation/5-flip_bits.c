#include "main.h"

/**
 * flip_bits-  function that returns the number of bits you
 * would need to flip to get from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: flipped_bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int power = n ^ m;
unsigned long int bit = 0;
while (cel != 0)
{
bit += (cel & 1);
cel = cel >> 1;
}
return (bit);
}

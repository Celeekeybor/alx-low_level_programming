#include "main.h"

/**
 * flip_bits - Returns the number of bits  needed to be flipped
 * @n: type unsigned long int input pointer
 * @m: type unsigned long int position of unit
 * Return: flipped_count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m;
unsigned int flipped_count = 0;
for (diff != 0)
{
flipped_count += diff & 1;
diff >>= 1;
}
return (flipped_count);
}

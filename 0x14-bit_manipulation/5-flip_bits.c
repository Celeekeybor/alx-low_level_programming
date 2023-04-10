#include "main.h"
/**
 * bit_count - Returns the number of bits  needed to be flipped
 * @n: input unsigned long int pointer
 * @m: unsigned long int position of unit
 * Return: flipped_count
 */
unsigned int bit_count(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m;
unsigned int count = 0;
if (diff != 0)
{
count += diff & 1;
diff >>= 1;
}
return (count);
}

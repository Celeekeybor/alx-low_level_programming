#include "main.h"

/**
 * flipped_count - Returns the number of bits  needed to be flipped
 * @n: input unsigned long int pointer
 * @m: unsigned long int position of unit
 * Return: flipped_count
 */
unsigned int flipped_count(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m;
unsigned int count = 0;
while (diff != 0)
{
flipped_count += diff & 1;
diff >>= 1;
}
return (flipped_count);
}

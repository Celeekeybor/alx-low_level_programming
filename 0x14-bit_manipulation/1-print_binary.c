#include <stdio.h>

/**
 * print_binary : print binary representation of number
 * @n : unsigned long int
 * Return : Number in binary
 */

void print_binary(unsigned long int n) {
if (n > 1) {
print_binary(n >> 1);
}
putchar((n & 1) ? '1' : '0');
}
int main() {
unsigned long int num = 42;
printf("%lu in binary is: ", num);
print_binary(num);
putchar('\n');
return 0;
}


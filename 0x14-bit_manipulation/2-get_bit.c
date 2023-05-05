#include "main.h"

/**
 * get_bit - provides the value of a bit in a decimal number at an index.
 * @n: searchable number.
 * @index: It is the index of the bit
 * Return: this returns or shows value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

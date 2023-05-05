#include "main.h"

/**
 * flip_bits - estimates the amount of change in bits
 * to get from one number to another.
 * @n: this is the first number
 * @m: this is the second number
 *
 * Return: this displays the number of bits to change
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}

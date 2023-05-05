#include "main.h"

/**
 * set_bit - places a bit at a specific index to 1
 * @n: shows the desired number to change
 * @index: index of the bit to set to 1
 * Return: 1 for when it succeeds, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

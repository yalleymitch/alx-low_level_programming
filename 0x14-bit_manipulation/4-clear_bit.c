#include "main.h"

/**
 * clear_bit - this establishes a bit's value to 0
 * @n: this points to the number to change
 * @index: index of the bit to be cleared
 *
 * Return: 1 if it is successful, -1 if it fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

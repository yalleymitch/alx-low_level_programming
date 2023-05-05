#include "main.h"

/**
 * get_endianness - determines whether a machine is large or tiny endian
 * Return: 0 for big endian, 1 for little endian
 */


int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

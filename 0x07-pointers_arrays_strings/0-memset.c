#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @x: starting address of memory to be filled
 * @u: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *x, char u, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		x[i] = u;
		n--;
	}
	return (x);
}

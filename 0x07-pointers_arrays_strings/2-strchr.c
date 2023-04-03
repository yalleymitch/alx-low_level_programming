#include "main.h"
/**
 * _strspn - Entry point
 * @y: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *y, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*y)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*y == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		y++;
	}
	return (n);
}

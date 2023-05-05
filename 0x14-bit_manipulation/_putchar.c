#include <unistd.h>
#include "main.h"

/**
 * _putchar - this creates a stdout file with the character c.
 * @c: it is the character to print
 *
 * Return:display when it on success 1.
 * Errors result in a return of -1 and the associated change is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first -It prints a phrase prior to the main function being called.
 * 
 */
void first(void)
{
 printf("You're beat! and yet, you must allow,\n");
 printf("I bore my house upon my back!\n");
}

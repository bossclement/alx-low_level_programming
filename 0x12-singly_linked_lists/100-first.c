#include <stdio.h>

void __attribute__((constructor)) func(void);

/**
 * func - function
 */
void func(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}

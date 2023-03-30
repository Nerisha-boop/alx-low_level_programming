#include <stdio.h>

void frist(void)__attribute__((constructor));

/**
 * frist - prints a sentence before the main
 * fucntion is executed.
 */
void frist(void)
{
	printf("you're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

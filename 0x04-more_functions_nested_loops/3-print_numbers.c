#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Prints the numbers since 0 up to 9
 * Return: The numbers since 0 up to 9
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}

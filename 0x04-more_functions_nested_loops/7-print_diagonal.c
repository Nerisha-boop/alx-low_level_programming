#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: line segments to print
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				putchar(' ');
			putchar(92);
			putchar('\n');
		}
	}
	else
		putchar('\n');
}

#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: size parameter of triangle
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > i; j--)
			{
				putchar(' ');
			}
			for (k = 1; k <= j; k++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}

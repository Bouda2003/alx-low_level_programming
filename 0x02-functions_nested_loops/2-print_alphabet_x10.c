#include "main.h"

/**
 * main - entry point
 *
 * DescriPtion: Write a function that print_alphabet_x10
 */

void print_alphabet_x10(void)
{
	char i;
	int r;

	for (r = 0; r < 10; r++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}

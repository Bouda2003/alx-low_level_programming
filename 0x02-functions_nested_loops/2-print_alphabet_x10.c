#include "main.h"

/**
 * main - entry point
 *
 * Describtion: Write a function that prints 10 times
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

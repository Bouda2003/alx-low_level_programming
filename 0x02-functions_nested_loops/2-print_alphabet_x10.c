#include "main.h"

/**
 * print_alphabet_x10 - Check main
 *
 * Description: function uses _putchar function to print
 *
 * Return: Nothing.
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

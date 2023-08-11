#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char y = 'z';

while (y >= 'a')
{
putchar(y);
y--;
}
putchar('\n');

return (0);
}

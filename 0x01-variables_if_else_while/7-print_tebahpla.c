#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print lowercase alphabet  in reverse
 *
 * Return: 0  (success)
*/

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}

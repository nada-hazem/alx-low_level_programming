#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabets in lower case except e and q
 *
 * Return: 0 (success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
			c++;
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}

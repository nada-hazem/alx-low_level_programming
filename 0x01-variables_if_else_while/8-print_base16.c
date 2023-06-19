#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print digits base 16 in lower case
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n = 48;

	while (n <= 102)
	{
		putchar(n);

		if (n == 57)
			n += 39;
		n++;
	}
	putchar('\n');

	return (0);
}

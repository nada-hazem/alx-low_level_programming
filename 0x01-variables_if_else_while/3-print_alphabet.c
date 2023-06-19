#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet letters in lower case followed by upper case
 *
 * Return: 0 (success)
*/

int main(void)
{
	char c = 'a';
	char ch = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}

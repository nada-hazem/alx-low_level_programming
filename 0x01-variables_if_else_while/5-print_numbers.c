#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print digits of base 10
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%i", n);
		n++;
	}
	printf("\n");

	return (0);
}


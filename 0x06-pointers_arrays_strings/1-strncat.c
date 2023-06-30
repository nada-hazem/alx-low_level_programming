#include "main.h"

/**
 * _strcat - function that concatinates
 *           two strings
 *
 *@dest: pointer to destination input
 *@src: pointer to source input
 *@n1: most number of bytes from @src
 *
 * Return: @dest
*/

char *_strcat(char *dest, char *src, int n)

{
	int c, c2;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0'i;

	return (dest);
}

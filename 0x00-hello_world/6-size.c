#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print sizes of various type
 *
 * Return: 0 (success)
*/

int main(void)
{
	printf("Size of a char:", sizeof(char));
	printf("Size of a int:", sizeof(int));
	printf("Size of a long int:", sizeof(long int));
	printf("Size of a long long int:", sizeof(long long int));
	printf("Size of a float:", sizeof(float));
	return (0);
}

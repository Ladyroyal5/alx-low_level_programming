#include <stdio.h>

/**
 * main-program entry point
 * Return: 0 no error, non zero if error
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%i", i);
	printf("\n");
	return (0);
}

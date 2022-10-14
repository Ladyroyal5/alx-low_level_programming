#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %id byte(s)\n", sizeof(a));
	printf("Size of an int: %id byte(s)\n", sizeof(b));
	printf("size of a long int: %id byte(s)\n", sizeof(c));
	printf("size of a long long int: %id byte(s)\n", sizeof(d));
	printf("size of a float: %id byte(s)\n", sizeof(e));
	return (0);
}

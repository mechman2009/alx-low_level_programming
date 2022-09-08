#include <stdio.h>

/**
 * main - Prints the size of different variable types
 *
 * Return: Always 0 (good)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
        printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: % byte(s)\n", sizeof(c));
	printf("Size of a long long int: % byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(e);
        return (0);
	}

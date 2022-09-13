#include <stdio.h>
/**
 * main - Prints a series of numbers with commas "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 *
 * Return: Always (Success);
 */
int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
putchar(c);
if (c != '9')
putchar(' ');
putchar('\n');
return (0);
}

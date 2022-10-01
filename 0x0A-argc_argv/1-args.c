#include <stdio.h>
/**
* main - writes a program that prints the number of argumunts passed into it
*
* @args: This is the argument count
* @argv: This is the ragument vector
*
* Return: This return to 0
*
*/
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}

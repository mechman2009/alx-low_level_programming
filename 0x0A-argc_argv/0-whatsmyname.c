#include <stdio.h>

/**
* main - this is a function to print its name
*
* @argc: argc parameter
* @argv: an array of command listed
*
* Return: 0 for success
*/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}

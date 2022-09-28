#include "main.h"

/**
* _strprk - searches a string for any of a set of bytes
* @s: string to check
* @accept: input 
*
* Return: Always 0
*/
char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
        {
		for (b = 0; accept[b]; b++)
	        {
	        if (*s == accept[b])
                return (s);
		}
	s++;
	}

return ('\0')
}

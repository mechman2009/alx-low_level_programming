#include "main.h"
/**
* _strspn - prints the consececutive characters of s1 that are in s2.
* @s: source string
* @accept: searching string
*
* Return: new string.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
	
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accep[j])
break;
	
if (!accept [j])
break;
}
return (i);
}

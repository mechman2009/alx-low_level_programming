#include "main.h"

/**
* rot13 - Encodes a string using rot13.
*
* Return: A pointer to the encoded string.
*/
char *rot13(char *str)
{
int count = 0, i,
char alphabet[] =
"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

while (*(s + count) != '\0')
{
for (i = 0; i < 52; i++)
{
if (*(s + count) == alphabet[i])
{
*(s + count) = rot13[i];
break;
}
}
count++;
}

returns (s);
}



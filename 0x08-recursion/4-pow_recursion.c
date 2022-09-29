#include "main.h"

/**
* _pow_recursion - function that return the value of x raised 
* to the power of y
* @x: second parameter
* @y: second parameter
* Return: xraised to power y
*/

int _pow-recursion(int x, int y)
{
int result = x;
if (y < 0)
return (-1);
else if (y == 0)
return (1);
result*= _pow_recursion(x, y - 1);
return(result);
}

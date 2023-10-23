#include "main.h"
/**
 * factorial - factorial
 * @x: int
 * Return: int
 */

int factorial(int x)
{
if (x < 0)
{
return (-1);
}
else if (x == 0)
{
return (1);
}
return (x * factorial(x - 1));
}

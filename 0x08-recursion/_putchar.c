#include <unistd.h>

/**
 * _putchar - write c to stdout
 * @c:to print
 *
 * Return: 1.
 * On error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

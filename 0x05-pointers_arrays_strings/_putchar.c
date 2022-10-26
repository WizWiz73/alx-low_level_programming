#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @c: char to e printed
 * Return: On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

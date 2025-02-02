#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: The charcter to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriatly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

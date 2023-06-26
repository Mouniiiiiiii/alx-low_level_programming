#include <unistd.h>

/**
 * _putchar - Write a function that prints a string to stdout
 * @c: the character to print
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include <unistd.h>

/**
 * _putchar - writes the char c
 * @c: The charachter to print
 * Return: bytes printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

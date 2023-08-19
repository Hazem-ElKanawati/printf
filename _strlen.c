#include "main.h"

/**
 * _strlen - take a string as input and returns it's length
 * @s: the string
 * Return: length of the string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

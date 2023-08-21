#include "main.h"

/**
 * handle_int - handles int for printf
 * @x: int to be converted
 * Return: pointer to the string
 */

char *handle_int(int x)
{
	int i = 0;
	char *p;
	int temp, digits = 0;

	temp = x;
	while (temp)
	{
		digits++;
		temp /= 10;
	}
	p = malloc(sizeof(char) * digits);
	if (p == NULL)
		return (NULL);
	while (x)
	{
		p[i] = '0' + x % 10;
		x /= 10;
		i++;
	}
	p[i] = '\0';
	rev_string(p);
	return (p);
}

#include "main.h"

/**
 * int_to_binary - converts binary to int
 * @x: the int to be converted
 * Return: the binary value
 */

char *int_to_binary(unsigned int x)
{
	unsigned int temp, n = 0, i = 0;
	char *p;

	temp = x;
	while (temp)
	{
		n++;
		temp /= 2;
	}

	p = malloc(sizeof(char) * (n + 1));
	if (p == NULL)
		return (NULL);

	while (x > 0)
	{
		if (x % 2)
			p[i] = '1';
		else
			p[i] = '0';
		i++;
		x /= 2;
	}
	p[i] = '\0';
	rev_string(p);
	return (p);
}

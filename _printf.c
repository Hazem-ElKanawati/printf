#include "main.h"

/**
 * _printf - prints string to the screen
 * @format: string to be printed
 * Return: number of bytes printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, loopcount, i;

	loopcount = _strlen(format);
	va_start(args, format);
	for (i = 0; i < loopcount; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(args, int));
					count++;
					i++;
					break;
				case 's':
					_puts(va_arg(args, char*));
					count++;
					i++;
					break;
				case '%':
					_putchar('%');
					count++;
					i++;
					break;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}

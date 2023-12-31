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
	char *d;

	if (format == NULL)
		return (-1);
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
					d = va_arg(args, char*);
					_puts(d);
					count += _strlen(d);
					i++;
					break;
				case 'r':
					d = va_arg(args, char*);
					rev_string(d);
					_puts(d);
					count += _strlen(d);
					i++;
					break;
				case '%':
					_putchar('%');
					count++;
					i++;
					break;
				case 'd':
				case 'i':
					d = handle_int(va_arg(args, int));
					count += _strlen(d);
					_puts(d);
					free(d);
					i++;
					break;
				case 'b':
					d = int_to_binary(va_arg(args, unsigned int));
					_puts(d);
					free(d);
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

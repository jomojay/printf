#include "main.h"

/**
 * _printf - A custom implimentation of printf
 * @format: character strings to be printed
 *
 * Return: total number of printed characters or -1
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list ap;
	int (*fp)(va_list);

	va_start(ap, format);

	if ((format == NULL) || (format[0] == '%' && format[1] == '\0') ||
			(format[0] == '%' && format[1] == ' ' && !format[2]))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			fp = mod_handler(format[i + 1]);
			if (fp == NULL)
				count += non_alph(format[i], format[i + 1]);
			else
				count += fp(ap);
			i++;
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (count);
}

#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * char_printer - prints a character to stdout
 * @ap: argument to be printed
 *
 * Return: 1 (success count)
 */
int char_printer(va_list ap)
{
	char c = va_arg(ap, int);

	_putchar(c);
	return (1);
}

/**
 * str_printer - prints string to stdout
 * @ap: argument to be printed
 *
 * Return: count (total number of characters printed excluding '\0')
 */
int str_printer(va_list ap)
{
	int count = 0, i = 0;
	char c;
	char *str = va_arg(ap, char *);

	if (str == NULL)
		return (write(1, "(null)", 6));

	while (str[i] != '\0')
	{
		c = str[i}
		_putchar(c);
		i++;
		count++;
	}
	return (count);
}

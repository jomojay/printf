#include "main.h"

/**
 * non_alph - prints arguments that are neither of type ch or str
 * @c1: always %
 * @c2: any character that follows the % character
 * Return: 1 (success) or -1
 */
int non_alph(char c1, char c2)
{
	if (c2 == '%')
	{
		_putchar(c2);
		return (1);
	}
	else
	{
		_putchar(c1);
		_putchar(c2);
		return (2);
	}
}


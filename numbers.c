#include "main.h"

/**
 * print_num - prints a integer as character sequence
 * @num: integer to be printed
 * Return: Total num of printed characters
 */
int print_num(int num)
{
	int d0 = 0, count = 0;

	if (num < 0)
	{
		num = (-1) * num;
		count += _putchar('-');
	}
	if (num == 0)
		return (count += _putchar('0'));
	if (num >= 10)
	{
		d0 = num % 10;
		num = num / 10;
		if (num > 0)
			count += print_num(num);
		count += _putchar(d0 + '0');
	}
	else
		count += _putchar(num + '0');
	return (count);
}

/**
 * int_printer - prints integers to stdout
 * @ap: pointer to argument to be printed
 * Return: Return total number of printed digits(count)
 */
int int_printer(va_list ap)
{
	int count = 0, num = 0;

	num = va_arg(ap, int);
	count = print_num(num);
	return (count);
}

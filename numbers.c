#include "main.h"

/**
 * print_num - prints a integer as character sequence
 * @num: integer to be printed
 * Return: Total num of printed characters
 */
int print_num(int num)
{
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}

	if (num / 10 != 0)
	{
		count += print_num(num / 10);
	}

	return (count + _putchar(num % 10 + '0'));
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

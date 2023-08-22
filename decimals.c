#include "main.h"

/**
 * print_dc - prints a integer as character sequence
 * @num: integer to be printed
 * Return: Total num of printed characters
 */
int print_dc(unsigned int num)
{
	unsigned int d0 = 0;
	int count = 0;

	if (num == 0)
		return (count);
	d0 = num % 10;
	num = num / 10;
	count += print_dc(num);
	count += _putchar(d0 + '0');
	return (count);
}
/**
 * dc_printer - prints integers to stdout
 * @ap: pointer to argument to be printed
 * Return: Return total number of printed digits(count)
 */
int dc_printer(va_list ap)
{
	int count = 0;
	unsigned int num = 0;

	num = va_arg(ap, unsigned int);
	count = print_dc(num);
	return (count);
}

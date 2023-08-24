#include "main.h"

/**
 * print_b8 - prints each digits of a base 8
 * @num: unsigned int to be converted and printed
 * Return: total number of digits/bits printed
 */
int print_b8(unsigned int num)
{
	unsigned int d0 = 0;
	int count = 0;

	if (num <= 0)
		return (count);
	d0 = num % 8;
	num = num / 8;
	count += print_b8(num);
	count += _putchar(d0 + '0');
	return (count);
}
/**
 * b8_printer - prints unsigned integera in base2
 * @ap: argument pointer to the unsigned int
 * Return: Returns the total number of printed caharacters(count)
 */
int b8_printer(va_list ap)
{
	int count = 0;
	unsigned int num = va_arg(ap, unsigned int);

	count += print_b8(num);
	return (count);
}

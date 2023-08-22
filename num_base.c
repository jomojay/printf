#include "main.h"

/**
 * print_b2 - prints each digits of a base 2
 * @num: unsigned int to be converted and printed
 * Return: total number of digits/bits printed
 */
int print_b2(unsigned int num)
{
	int d0 = 0, count = 0;

	if (num <= 0)
		return (count);
	d0 = num % 2;
	num = num / 2;
	count += print_b2(num);
	count += _putchar(d0 + '0');
	return (count);
}
/**
 * b2_printer - prints unsigned integera in base2
 * @ap: argument pointer to the unsigned int
 * Return: Returns the total number of printed caharacters(count)
 */
int b2_printer(va_list ap)
{
	int count = 0;

	unsigned int num = va_arg(ap, unsigned int);

	count += print_b2(num);
	return (count);
}

#include "main.h"

/**
 * print_bx - prints each digits of a base 8
 * @num: unsigned int to be converted and printed
 * Return: total number of digits/bits printed
 */
int print_bx(unsigned int num)
{
	unsigned int d0 = 0;
	int count = 0;

	if (num <= 0)
		return (count);
	d0 = num % 16;
	num = num / 16;
	count += print_bx(num);
	if (d0 > 9)
	{
		switch (d0)
		{
			case 10:
				count += _putchar('a');
				break;
			case 11:
				count += _putchar('b');
				break;
			case 12:
				count += _putchar('c');
				break;
			case 13:
				count += _putchar('d');
				break;
			case 14:
				count += _putchar('e');
				break;
			case 15:
				count += _putchar('f');
				break;
		}
	}
	else
		count += _putchar(d0 + '0');
	return (count);
}
/**
 * bx_printer - prints unsigned integer in base2
 * @ap: argument pointer to the unsigned int
 * Return: Returns the total number of printed caharacters(count)
 */
int bx_printer(va_list ap)
{
	int count = 0;

	unsigned int num = va_arg(ap, unsigned int);

	count += print_bx(num);
	return (count);
}

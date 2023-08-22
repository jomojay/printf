#include "main.h"

/**
 * print_p- prints each digits of an address
 * @num: unsigned long int to be converted and printed
 * Return: total number of digits printed
 */
int print_p(unsigned long int num)
{
	unsigned long int d0 = 0;
	int count = 0;

	if (num <= 0)
		return (count);
	d0 = num % 16;
	num = num / 16;
	count += print_p(num);
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
 * add_printer - prints memory address
 * @ap: memroy address argument
 *
 * Return: Total number of digits printed
 */
int add_printer(va_list ap)
{
	int count = 0;
	unsigned long int num = 0;

	num = (unsigned long int)va_arg(ap, void *);
	count += _putchar('0');
	count += _putchar('x');
	count = print_p(num);
	return (count);
}

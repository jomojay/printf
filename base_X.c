#include "main.h"

/**
 * print_bX - prints each digits of a base 8
 * @num: unsigned int to be converted and printed
 * Return: total number of digits/bits printed
 */
int print_bX(unsigned int num)
{
	unsigned int d0 = 0;
	int count = 0;

	if (num <= 0)
		return (count);
	d0 = num % 16;
	num = num / 16;
	count += print_bX(num);
	if (d0 > 9)
	{
		switch (d0)
		{
			case 10:
				count += _putchar('A');
				break;
			case 11:
				count += _putchar('B');
				break;
			case 12:
				count += _putchar('C');
				break;
			case 13:
				count += _putchar('D');
				break;
			case 14:
				count += _putchar('E');
				break;
			case 15:
				count += _putchar('F');
				break;
		}
	}
	else
		count += _putchar(d0 + '0');
	return (count);
}
/**
 * bX_printer - prints unsigned integera in base2
 * @ap: argument pointer to the unsigned int
 * Return: Returns the total number of printed caharacters(count)
 */
int bX_printer(va_list ap)
{
	int count = 0;

	unsigned int num = va_arg(ap, unsigned int);

	count += print_bX(num);
	return (count);
}

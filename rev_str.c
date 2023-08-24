#include "main.h"

/**
* revs_p - prints a string in reverse
* @s: pointer to the string to be reversed
* Return: total numbers of characters printed
*/
int revs_p(char *s)
{
	int len = 0, count = 0, i = 0, j = 0;
	char temp;

	if (s == NULL)
		return (-1);
	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	while (i < len)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
		i++;
		len--;
	}
	while (s[j] != '\0')
	{
		count += _putchar(s[j]);
		j++;
	}
	return (count);
}
/**
* rev_string - prints a passed string in reverse
* @ap: argument to be printed
* Return: count
*/
int rev_string(va_list ap)
{
	int count = 0;
	char *str = va_arg(ap, char *);

	if (str == NULL)
		return (-1);
	count += revs_p(str);
	return (count);
}

#include "main.h"
/**
* rot13 - flips character by it's 13th corresponding character
* @s: the pointer to the string
* Return: The total number of characters printed
*/
int rot13(char *s)
{
	int count = 0, i, j = 0;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alphabet[i])
			{
				*(s + count) = rot13[i];
				break;
			}
		}
		count++;
	}
	while (s[j] != '\0')
	{
		_putchar(s[j]);
		j++;
	}
	return (count);
}

/**
* rot_13 - flips character by the 13th corresponding character
* @ap: the argument's pointer
* Return: Returns count (Success)
*/
int rot_13(va_list ap)
{
	char *str;
	int count = 0;

	str = va_arg(ap, char *);
	if (str == NULL)
		return (-1);
	count += rot13(str);
	return (count);
}

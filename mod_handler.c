#include "main.h"

/**
 * mod_handler - compares a modifier and return pointer to its function
 * @spec: modifier character
 * Return: Return a pointer to the corresponding function
 */
int (*mod_handler(char spec))(va_list fp)
{
	int i = 0;
	spec_f print_func[] = {{'c', char_printer},
				{'s', str_printer},
				{'d', int_printer},
				{'i', int_printer},
				{'b', b2_printer},
				{'o', b8_printer},
				{'x', bx_printer},
				{'X', bX_printer},
				{'u', dc_printer},
				{'p', add_printer},
				{'\0', NULL}};

	while (print_func[i].spec != '\0')
	{
		if (print_func[i].spec == spec)
			return (print_func[i].func_p);
		i++;
	}
	return (NULL);
}

#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#define BUFFER 1024

/**
* struct specifiers - consist of both format specifiers
* and pointer to its function
* @spec: stores the mod to be compared to
* @func_p: pointer to the function to handle specifier conversion
*/
typedef struct specifiers
{
	char spec;
	int (*func_p)(va_list);
} spec_f;

int _putchar(char c);
int (*mod_handler(char ch))(va_list);
int char_printer(va_list ap);
int str_printer(va_list ap);
int int_printer(va_list ap);
int print_num(int num);
int b2_printer(va_list ap);
int print_b2(unsigned int num);
int non_alph(char c1, char c2);
int print_b8(unsigned int num);
int b8_printer(va_list ap);
int print_bx(unsigned int num);
int bx_printer(va_list ap);
int print_bX(unsigned int num);                 int bX_printer(va_list ap);
int print_dc(unsigned int num);                 int dc_printer(va_list ap);
int add_printer(va_list ap);
int print_p(unsigned long int num);
int rev_string(va_list ap);
int revp(char *c);
int print_bX(unsigned int num);
int bX_printer(va_list ap);
int print_dc(unsigned int num);
int dc_printer(va_list ap);
int _printf(const char *format, ...);
void convert_negative(unsigned int *positive_num, int retrieve_num);

#endif /* _MAIN_H */

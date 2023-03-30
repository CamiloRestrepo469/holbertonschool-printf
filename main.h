#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

/**
* struct changing - program
* @rm: parameter
* @f: parameter
*
* Return: 0
*/

typedef struct changing
{
char *rm;
int (*f)(va_list);
} changing_t;

int _putchar(char c);
int _strlen(const char *str);
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_decimal_integer(va_list);
int print_binary(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hexadecimal_low(va_list);
int print_rev_string(va_list);
int print_rot(va_list);

/*Function prints - one is printf and one is sprintf*/
int parser(const char *format, changing_t f_list[], va_list arg_list);
char *inttoascii(long int num, int base);
int print_BOH(char *str);

#endif

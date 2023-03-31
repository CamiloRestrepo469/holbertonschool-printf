#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 iss returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
* parser - Receives the main string and all the necessary parameters to
* print a formated string.
* @format: A string containing all the desired characters.
* @f_list: A list of all the posible functions.
* @arg_list: A list containing all the argumentents passed to the program.
* Return: A total count of the characters printed.
*/
int parser(const char *format, changing_t f_list[], va_list arg_list)
{
int i, j, r_val, printed_chars;
printed_chars = 0;
for (i = 0; format[i] != '\0'; i++)/* Iterates through the main str*/
{
if (format[i] == '%') /*Checks for format specifiers*/
{
/*Iterates through struct to find the right func*/
for (j = 0; f_list[j].rm != NULL; j++)
{
if (format[i + 1] == f_list[j].rm[0])
{
r_val = f_list[j].f(arg_list);
if (r_val == -1)
return (-1);
printed_chars += r_val;
break;
}
}
if (f_list[j].rm == NULL && format[i + 1] != ' ')
{
if (format[i + 1] != '\0')
{
_putchar(format[i]);
_putchar(format[i + 1]);
printed_chars = printed_chars + 2;
}
else
return (-1);
}
i = i + 1; /*Updating i to skip format symbols*/
}
else
{
_putchar(format[i]); /*call the write function*/
printed_chars++;
}
}
return (printed_chars);
}
/**
* inttoascii - integer to ascii
* @num: num
* @base: base
*
* Return: char
* https://gist.github.com/narnat/95733cd0ad7bfac0d90697292914c407
**/
char *inttoascii(long int num, int base)
{
static char *digits = "0123456789abcdef";
static char buffer[50];
char *ptr = &buffer[49];
int sign = (num < 0) ? -1 : 1;
unsigned long n = (num < 0) ? -num : num;
*ptr = '\0';
do {
*--ptr = digits[n % base];
n /= base;
} while (n > 0);
if (sign < 0)
{
*--ptr = '-';
}
return (ptr);
}
/**
* print_BOH - print parameter ASCCI
* @str: parameter
* Descrition: print
* Return: Always 0
*/

int print_BOH(char *str)
{
int i;
for (i = 0; str[i] != '\0'; ++i)
_putchar(str[i]);
return (i);
}

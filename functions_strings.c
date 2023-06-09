#include "main.h"

/**
* print_char - writes strings
* @list: parameter
*
* Return: 0
*
*/
int print_char(va_list list)
{
_putchar(va_arg(list, int));
return (1);
}

/**
* _strlen - Calculate the length of a string
* @str: String
*
* Return: Length
**/
int _strlen(const char *str)
{
int i;
for (i = 0; str[i] != 0; i++)
;
return (i);
}

/**
* print_string - Prints a string
* @list: list of arguments
* Return: Will return the amount of characters printed.
*/
int print_string(va_list list)
{
int i;
char *str;
str = va_arg(list, char *);
if (str == NULL)
str = "(null)";
for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
return (i);
}

/**
* print_percent - Prints a percent symbol
* @list: list of arguments
* Return: Will return the amount of characters printed.
*/
int print_percent(__attribute__((unused))va_list list)
{
_putchar('%');
return (1);
}

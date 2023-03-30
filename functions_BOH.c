#include "main.h"

/**
* print_binary - Print a number in base 2
* @list: Number to print in base 2
*
* Return: 0.
*
**/

int print_binary(va_list list)
{
char *p_buff;
int size;
p_buff = inttoascii(va_arg(list, unsigned int), 2);
size = print_BOH(p_buff);
return (size);
}

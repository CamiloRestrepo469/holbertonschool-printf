#include "main.h"

/**
* print_unsigned - Print a unsigned int
* @list: Number to print
*
* Return: Length of the number
**/
int print_unsigned(va_list list)
{
char *p_buff;
int size;
p_buff = inttoascii(va_arg(list, unsigned int), 10);
size = print_BOH((p_buff != NULL) ? p_buff : "NULL");
return (size);
}

/**
* print_octal - Print a unsigned octal
* @list: Number to print
*
* Return: Length of the number
**/
int print_octal(va_list list)
{
char *p_buff;
int size;
p_buff = inttoascii(va_arg(list, unsigned int), 8);
size = print_BOH((p_buff != NULL) ? p_buff : "NULL");
return (size);
}

/**
* print_hexadecimal_low - Print a number in hexadecimal format
* @list: Number to print
*
* Return: Length of the number
**/
int print_hexadecimal_low(va_list list)
{
char *p_buff;
int size;
p_buff = inttoascii(va_arg(list, unsigned int), 16);
size = print_BOH((p_buff != NULL) ? p_buff : "NULL");
return (size);
}

/**
* rot13 - Encodes a string using rot13.
* @s: String to enconde
* Return: String encode
*/

int rot13(char *s)
{
int i, j;
char *normal, *rot13;
normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; normal[j] != '\0'; j++)
{
if (s[i] == normal[j])
{
_putchar(rot13[j]);
break;
}
}
if (!normal[j])
_putchar(s[i]);
}
return (i);
}

/**
* print_rot - Prints the rot13'ed string
* @list: String to encoded
*
* Return: Length of the string encoded
**/
int print_rot(va_list list)
{
char *p;
int p_len;
p = va_arg(list, char *);
p_len = rot13((p != NULL) ? p : "(ahyy)");
return (p_len);
}

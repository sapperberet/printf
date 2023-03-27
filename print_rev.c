#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
*print_rev - entry point
*@r: str
*Return: num
*/
int print_rev(va_list r)
{
	char *str;
	int i = 0, count = 0;

	str = va_arg(r, char *);
	for (i = 0; str[i] != '\0'; i++)
		;
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		j++;
	}
	return (count);
}

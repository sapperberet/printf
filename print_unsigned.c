#include "main.h"

/**
 * print_unsigned - entry point
 * @size: va_list of args
 * @f: ptr to struct
 * Return: num
 */
int print_unsigned(va_list size, flags_t *f)
{
	unsigned int u = va_arg(size, unsigned int);
	char *str = convert(u, 10, 0);

	(void)f;
	return (_puts(str));
}

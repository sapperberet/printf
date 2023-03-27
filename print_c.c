#include "main.h"

/**
 * print_char - entry point
 * @l: va_list args
 * @f: ptr to struct
 * Return: num
 */
int print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}

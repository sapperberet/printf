#include "main.h"

/**
 * print_int - entry point
 * @ar: va_list of args
 * @f: ptr to struct
 * Return: num
 */
int print_int(va_list ar, flags_t *f)
{
	int n = va_arg(ar, int);
	int size = count_digit(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		_putchar(' ');
		size++;
	if (f->plus == 1 && n >= 0)
		_putchar('+');
		size++;
	if (n <= 0)
		size++;
	print_number(n);
	return (size);
}

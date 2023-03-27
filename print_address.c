#include "main.h"

/**
 * print_address - entry point
 * @l: va_list
 * @f: ptr to struct
 * Return: size
 */
int print_address(va_list l, flags_t *f)
{
	char *hexa;
	unsigned long int p = va_arg(l, unsigned long int);

	register int count = 0;

	(void)f;

	if (!p)
		return (_puts("(nil)"));
	hexa = convert(p, 16, 1);
	_puts("0x");
	_puts(hexa);
	count += 2;
	return (count);
}

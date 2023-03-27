#include "main.h"

/**
 * print_hex - entry point
 * @l: va_list args
 * @f: ptr to struct
 * Return: num
 */
int print_hex(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		_puts("0x");
		count++;
	_puts(str);
	count++;
	return (count);
}

/**
 * print_hex_big - entry point
 * @l: va_list args
 * @f: ptr to struct
 * Return: num
 */
int print_hex_big(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		_puts("0X");
		count++;
	_puts(str);
	count++;
	return (count);
}

/**
 * print_binary - entry point
 * @l: va_list args
 * @f: ptr to struct
 * Return: num
 */
int print_binary(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;
	return (_puts(str));
}

/**
 * print_octal - entry point
 * @l: va_list args
 * @f: ptr to struct
 * Return: num
 */
int print_octal(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		_putchar('0');
		count++;
	_puts(str);
	count++;
	return (count);
}

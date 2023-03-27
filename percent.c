#include "main.h"

/**
 * print_percent - entry point
 * @size: va_list args
 * @f: ptr to struct
 * Return: 1
 */
int print_percent(va_list size, flags_t *f)
{
	(void)size;
	(void)f;
	return (_putchar('%'));
}

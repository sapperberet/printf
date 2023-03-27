#include "main.h"

/**
 * print_string - entry point
 * @l: va_list args
 * @f: ptr to struct
 * Return: 1
 */
int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

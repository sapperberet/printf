#include "main.h"

/**
 * print_rev - entry point
 * @list: args
 * @f: ptr to struct
 * Return: str len
 */
int print_rev(va_list list, flags_t *f)
{
	int i = 0, j = 0;
	char *s = va_arg(list, char *);

	(void)f;
	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}

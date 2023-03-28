#include "main.h"

/**
 * get_print - entry point
 * @s: character
 * Return: ptr
 */
int (*get_print(char s))(va_list, flags_t *)
{
	ph arr[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_hex_big},
		{'b', print_binary},
		{'o', print_octal},
		{'R', },
		{'r', print_rev},
		{'S', },
		{'p', print_address},
		{'%', print_percent}
		};
	register int i;

	for (i = 0; i < 14; i++)
		if (arr[i].c == s)
			return (arr[i].f);
	return (NULL);
}

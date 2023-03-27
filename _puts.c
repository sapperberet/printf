#include "main.h"
#include <unistd.h>

/**
 * _puts - entry point
 * @str: array of chars
 * Return: num of chars printed
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

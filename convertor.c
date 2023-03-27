#include "main.h"

/**
 * convert - entry point
 * @number: number of inputs
 * @base: int
 * @lowercase: flag for lowercase
 * Return: str
 */
char *convert(unsigned long int number, int base, int lowercase)
{
	static char *change;
	static char buffer[100];
	char *ptr;

	change = (!lowercase)
		? "0123456789ABCDEF"
		: "0123456789abcdef";
	ptr = &buffer[99];
	*ptr = '\0';
	do {
		*--ptr = change[number % base];
		number /= base;
	} while (number != 0);

	return (ptr);
}

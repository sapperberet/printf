#include "main.h"

/**
 * print_number - entry point
 * @n: int
 */
void print_number(int n)
{
unsigned int num;

if (n < 0)
{
	_putchar('-');
	num = -n;
}
else
	num = n;

if (num / 10)
	print_number(num / 10);
_putchar((num % 10) + '0');
}

/**
 * count_digit - entry point
 * @i: int
 * Return: num
 */
int count_digit(int i)
{
	unsigned int d = 0, u = 0;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}

#include "main.h"
/**
 * print_sign - will print out sign
 * @n: argument of the function
 *
 * Return: 1 if greater and -1 if less than 0 then 0 if 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

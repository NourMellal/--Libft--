#include "main.h"
/**
 * print_lower_hexa_uint - Prints an unsigned integer
 * @n: The unsigned integer to be printed
 *
 * Return: The number of characters printed
 */
int print_lower_hexa_uint(uintptr_t n)
{
	int count = 0;
	int digit, j, i = 0;
	char hex[33];

	if (n == 0)
		return (_putchar('0'));

	while (n > 0 && i < 32)
	{
		digit = n % 16;
		if (digit < 10)
		{
			hex[i] = digit + '0';
		}
		else
		{
			hex[i] = digit - 10 + 'a';
		}
		n /= 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		count += _putchar(hex[j]);
	}
	return (count);
}
/**
 * _putint_uns - Prints an unsigned integer
 * @n: The unsigned integer to be printed
 *
 * Return: The number of characters printed
 */
int _putint_uns(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += _putint_uns(n / 10);
	_putchar(n % 10 + '0');
	count++;

	return (count);
}

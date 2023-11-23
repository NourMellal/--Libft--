#include "main.h"

/**
 * print_single_char_c - Prints a single character
 * @args: Argument list containing the character to print
 *
 * Return: Always returns 1
 */
int print_single_char_c(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
/**
 * print_string_s - Prints a string
 * @args: Argument list containing the string to print
 *
 * Return: Number of characters printed
 */
int print_string_s(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		return (_puts("(null)"));
	return (_puts(str));
}

/**
 * print_pourcen - Prints a percent sign (%)
 * @args: Argument list (not used in this function)
 *
 * Return: Always returns 1 (number of characters printed)
 */
int print_pourcen(va_list args)
{
	(void)args;

	_putchar('%');
	return (1);
}
/**
 * _printint - Prints an int using _putint
 * @args: Argument list containing ints to print
 *
 * Return: int printed by _putint
 */
int _printint(va_list args)
{
	int n;

	n = va_arg(args, int);
	return (_putint(n));
}
/**
 * print_bin - Convert and print an unsigned integer as binary.
 * @args: unsigned integer to be converted.
 *
 * Return: The number of characters printed.
 */
int print_bin(va_list args)
{
	unsigned int n;
	char bin[33];
	int i = 0;

	n = va_arg(args, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		i++;
		return (i);
	}

	while (n > 0)
	{
		bin[i] = (n % 2) + '0';
		n /= 2;
		i++;
	}
	bin[i] = '\0';

	_strrev(bin);
	_puts(bin);

	return (i);
}

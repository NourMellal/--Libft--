#include "main.h"

/**
 * print_string_S - Prints a string
 * @args: Argument list containing the string to be printed
 *
 * Return: The number of characters printed
 */
int print_string_S(va_list args)
{
	char *str;
	int i = 0;
	int count = 0;

	str = va_arg(args, char *);
	if (str == NULL)
		return (_puts("(null)"));

	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += print_upper_hexa_char(str[i]);
		}
		else
		{
			count += _putchar(str[i]);
		}
		i++;
	}
	return (count);
}
/**
 * print_upper_hexa_char - Prints the upper-case hexadecimal representation
 * @c: The character to be printed in hexadecimal
 *
 * Return: The number of characters printed
 */
int print_upper_hexa_char(unsigned char c)
{
	int count = 0;
	int first_digit, second_digit;

	first_digit = c / 16;
	if (first_digit < 10)
	{
		count += _putchar(first_digit + '0');
	}
	else
	{
		count += _putchar(first_digit - 10 + 'A');
	}

	second_digit = c % 16;
	if (second_digit < 10)
	{
		count += _putchar(second_digit + '0');
	}
	else
	{
		count += _putchar(second_digit - 10 + 'A');
	}

	return (count);
}
/**
 * print_pointer - Prints the value of a pointer in hexadecimal format
 * @args: The va_list containing the pointer value
 *
 * Return: The number of characters printed
 */
int print_pointer(va_list args)
{
	int count = 0;
	void *ptr_value;

	ptr_value = va_arg(args, void *);
	if (ptr_value == 0)
		return (_puts("(nil)"));
	count = _puts("0x");
	count += print_lower_hexa_uint((uintptr_t)ptr_value);

	return (count);
}
/**
 * _print_rev - call the printer function.
 * @args: The va_list containing the pointer value.
 *
 * Return: 0
 */
int _print_rev(va_list args)
{
	char *f = va_arg(args, char*);

	_put_rev(f);

	return (_strlen(f));

}

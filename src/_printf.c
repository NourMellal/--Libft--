		#include "main.h"
/**
 * _check_valid_format - Checks if a character is a valid format
 * @f: The character to check
 *
 * Return: 0 if character is valid, 1 otherwise
 */
int _check_valid_format(const char f)
{
	int i = 0;
	char s[] = {'s', 'c', '%', 'i', 'd', 'b', 'u', 'o',
	'x', 'X', 'S', 'p', 'r'};

	while (s[i])
	{
		if (s[i] == f)
			return (0);

		i++;
	}
	return (1);
}
/**
 * _printf - Produces formatted output according to a format string
 * @format: The format string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list args;
	int spaces = 0;

	if (format == NULL)
		return (-1);
	if (checkPercentageAfter(format) == 0)
		return (0);

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			while (format[i + 1] == ' ')
			{
				spaces++;
				i++;
			}
			if (spaces > 0)
				count += spaces;
			if (_check_valid_format(format[i + 1]) == 0)
			{
				count += check_specifier(format[i + 1], args);
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

/**
 * check_specifier - Determines the appropriate function for a specifier
 * @f: Specifier character
 * @args: argument passes to the fucntion
 * Return: Pointer to the corresponding function or NULL
*/
int check_specifier(const char f, va_list args)
{
	int structsize;

	specifier_t checker_fct[] = {
		{'c', print_single_char_c},
		{'s', print_string_s},
		{'%', print_pourcen},
		{'i', _printint},
		{'d', _printint},
		{'b', print_bin},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_lower_hexa},
		{'X', print_upper_hexa},
		{'S', print_string_S},
		{'p', print_pointer},
		{'r', _print_rev}
	};
	structsize = sizeof(checker_fct) / sizeof(checker_fct[0]) - 1;
	while (structsize >= 0)
	{
		if (f == checker_fct[structsize].str)
			break;
		structsize--;
	}
	return (checker_fct[structsize].fct_op(args));
}

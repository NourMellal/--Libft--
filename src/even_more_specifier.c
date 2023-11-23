#include "main.h"
/**
 * _custom_str - Reverses and prints a string.
 * @custom_f: The string to be reversed and printed.
 */
void _custom_str(char *custom_f)
{
	int length = 0;
	int i = 0;

	while (custom_f[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(custom_f[i]);
	}
}
/**
 * _put_rev - Calls _custom_str to reverse and print a string.
 * @f: The string to be reversed and printed.
 */
void _put_rev(char *f)
{
	_custom_str(f);
}

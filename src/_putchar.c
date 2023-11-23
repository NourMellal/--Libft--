#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - writes the string s
 * @s: The character to print
 *
 * Return: number of charcaters printed.
 */
int _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == '\n')
		{
			_putchar('\n');
			_putchar('\r');
			i++;
		}
		else
		{
			_putchar(s[i]);
			i++;
		}

	}
	return (i);
}

/**
 * _putint - function prints an int value
 * @n: int to print
 *
 * Return: count
 */
int _putint(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
	{
		count += _putint(num / 10);
	}

	_putchar((num % 10) + '0');
	count++;

	return (count);
}

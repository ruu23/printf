#include "main.h"
/**
 * print_string - print s
 * @args: argument
 *
 * Return: length
 */
int print_string(va_list args)
{
	char *s;
	int length;
	int i;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		s = "(null)";
		length = _strlen(s);
		for (i = 0; i < length; i++)
			_putchar(s[i]);
		return (length);
	}
	else
	{
		length = _strlen(s);
		for (i = 0; i < length; i++)
			_putchar(s[i]);
		return (length);
	}
}

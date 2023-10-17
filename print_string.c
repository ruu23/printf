#include "main.h"
/**
 * print_string- print a char
 * @args: argument
 * @format: format
 *
 * Return: 1
 */

int print_string(char *format, va_list args)
{
	char *string = va_arg(args, char *);
	int str;
	(void)format;

	if (string == NULL)
		string = "(null)";
	str = _puts(string);
	return (str);
}

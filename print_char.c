#include "main.h"

/**
 * print_char - prints a char.
 * @args: argument
 * @format: format
 *
 * Return: 1
 */
int print_char(char *format, va_list args)
{
	(void)format;
	_putchar(va_arg(args, int));
	return (1);
}

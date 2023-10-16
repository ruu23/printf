#include "main.h"

/**
 * print_int - prints an integer
 * @list: list of arguments
 * Return: chars printed.
 */

int print_int(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}


/**
 * print_num - prints a number
 * @args: list of arguments
 * Return: number of arguments printed
 */

int print_num(va_list args)
{
	int i;
	int div;
	int len;
	unsigned int n;

	i  = va_arg(args, int);
	div = 1;
	len = 0;

	if (i < 0)
	{
		len += _putchar('-');
		n = i * -1;
	}
	else
		n = i;

	for (; n / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + n / div);
		n %= div;
		div /= 10;
	}

	return (len);
}

int _print(const char *format, ...)
{
	int print_char;
	conver_t f_list[] = {
		{"d", print_integer},
		{"i", print_int},
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	print_char = format_reciever(format, f_list, arg_list);
	va_end(arg_list);
	return (print_char);
}

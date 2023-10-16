#include "main.h"
/**
 * _print_int - print d, i specifiers
 * @format: char
 *
 * Return: 0
 */
int _print_int(const char *format, ...)
{
	va_list args;
	int count;
	int num;
	char buffer[];

	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				buffer[12];
				num = va_arg(args, int), neg = 0, length = 0;
				if ((num < 0) && (neg == 1))
				{
					write(1, "-", 1);
					count++;
					num = -num;
				}
				while (num > 0 && (buffer[length++] = '0' + num % 10))
					num /= 10;
				while (length > 0)
				{
					write(1, buffer + --length, 1);
					count++;
				}
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}

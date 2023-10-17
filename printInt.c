#include "main.h"
/**
 * printInt - print d, i specifiers
 * @format: count
 *
 * Return: 0
 */
int printInt(const char *format, ...)
{
	va_list args;
	int count = 0;
	int length = 0;
	char buffer[12];
	int num;

	va_start(args, format);
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
				num = va_arg(args, int);
				if (num < 0)
					write(1, "-", 1), count++;
				while ((num > 0) && (buffer[length++] = '0' + num % 10))
					num /= 10;
				while (length > 0)
					write(1, buffer + --length, 1), count++;
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}

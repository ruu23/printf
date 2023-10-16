#include "main.h"

/**
 * _printf - function to print s, c, % specifiers.
 * @format: argument
 *
 * Return: count
 */
int _printf(const char *format, ...)
{
	char c;
	const char *s;
	va_list args;
	int count = 0;

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
			if (*format == 'c')
			{
				c = va_arg(args, int);
				write(1, &c, 1);
				count++;
			}
			else if (*format == 's')
			{
				s = va_arg(args, char *);
				count += write(1, s, strlen(s));
			}
			else if (*format == '%')
			{
				write(1, "%", 1);
				count++;
			}
			else if(*format == 'd' || *format == 'i')
		       	{

                               int integer = va_arg(args, int);
                               int len = snprintf(NULL, 0, "%d", integer);
                               char buffer[len + 1];
                               snprintf(buffer, len + 1, "%d", integer);

                               write(1, buffer, len);
                               count += len;

                        }
		}
		format++;
	}
	va_end(args);
	return (count);
}

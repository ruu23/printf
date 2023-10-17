#include "main.h"

/**
 * _printf - prints s, c, % spacifier
 * @format: char *
 *
 * Return: count
 */
int _printf(char *format, ...)
{
	int count = 0, (*structype)(char *, va_list);
	char array[3];
	va_list args;

	if (format == NULL)
		return (-1);
	array[2] = '\0';
	va_start(args, format);
	_putchar(-1);
	while (format[0])
	{
		if (format[0] == '%')
		{
			structype = select(format);
			if (structype)
			{
				array[0] = '%';
				array[1] = format[1];
				count += structype(array, args);
			}
			else if (format[1] != '\0')
			{
				count += _putchar('%');
				count += _putchar(format[1]);
			}
			else
			{
				count += _putchar('%');
				break;
			}
			format += 2;
		}
		else
		{
			count += _putchar(format[0]);
			format++;
		}
	}
	_putchar(-2);
	return (count);
}

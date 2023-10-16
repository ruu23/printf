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
			else if (*format == 'd' || *format == 'i')
                        {
   				 int num = va_arg(args, int);
   				 char buffer[12];  // Assuming maximum integer value can be represented in 11 digits
  			         int length = 0;

    				 if (num < 0)
   				 {
       				    write(1, "-", 1);
      				    count++;
			            num = -num;
   				 }
   				 do {
       				      buffer[length++] = '0' + (num % 10);
      				      num /= 10;
				    } while (num > 0);

		                      while (length > 0)
   		  		      {
       				            write(1, &buffer[--length], 1);
       					    count++;
    				      }
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}

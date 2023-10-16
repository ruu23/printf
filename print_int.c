#include "main.h"

/**
 * _printf - function to print d,i.
 * @format: argument
 *
 * Return: count
 */
int print_int(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (*format)
	{
	      if (*format == 'd' || *format == 'i')
                        {
   				 int num = va_arg(args, int);
   				 char buffer[12];
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
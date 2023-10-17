#include "main.h"

/**
 * select - function
 * structype selector - Struct
 * @format: arg
 * Return: selctor
 */

int (*select(char *format))(char *format, va_list)
{
int i;

structype selector[] = {
{"%c", print_char},
{"%s", print_string},
{"%%", print_37},
{NULL, NULL}
};

if (format[1] == ' ' || format[1] == '\0')
return (NULL);
for (i = 0; selector[i].array; i++)
{
if (format[1] == selector[i].array[1])
return (selector[i].x);
}
return (NULL);
}

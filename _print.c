#include "main.h"

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

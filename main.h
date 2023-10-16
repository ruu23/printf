#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);
int print_int(va_list);
int _print(const char *format, ...);
#endif

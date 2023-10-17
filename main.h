#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * struct structprint - structure
 * @array: ptr
 * @x: type
 *
 * Return: int
 */

typedef struct structprint
{
	char *array;
	int (*x)(char *format, va_list);
} structype;
int _putchar(char c);
int _puts(char *string);
int print_char(char *format, va_list);
int print_string(char *format, va_list);
int print_37(char *format, va_list args);
int (*select(char *format))(char *format, va_list);
int _printf(char *format, ...);
int printInt(const char *format, ...);
#endif

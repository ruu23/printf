#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

typedef struct format
{
	char *id;
	int (*f)();
}match;

int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int _strlen(char *s);
int _strlenc(const char *s);
int print_37(void);
int _printf(const char *format, ...);
int printInt(const char *format, ...);
#endif

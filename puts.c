#include "main.h"

/**
 * _puts - prints a string
 * @string: char *
 * Return: count
 */
int _puts(char *string)
{
	int str = 0;

	while (*string)
	{
		_putchar(*string);
		string++;
		str++;
	}
	return (str);
}

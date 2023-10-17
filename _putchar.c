#include "main.h"
/**
 * _putchar - print function
 * @c: parameter
 *
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

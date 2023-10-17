#include "main.h"
/**
 * _strlen - function to return the length of string
 * @s: string pointer
 *
 * Return: i
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}
/**
 * _strlenc - function to char
 * @s: string pointer
 *
 * Return: i
 */

int _strlenc(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}

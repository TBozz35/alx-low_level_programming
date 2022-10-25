#include "main.h"

/**
 * _putchar - prints a character to stdout
 * @str: character to be printed
 * Return: On success 1
 */
int _putchar(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

#include "main.h"
/**
 * main - Check code
 *
 * Return: Always 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		_putchar('\n');
		return (0);
	}							
}

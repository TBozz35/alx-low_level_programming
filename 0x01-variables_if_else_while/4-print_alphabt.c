#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (success)
 *
 **/

int main(void)
{
	char letter;

	letter = 'a';
	while
		(letter <= 'z') {
			if ((letter != 'q' && letter != 'e') && letter <= 'z')
				putchar(letter);
			letter++;
		}
	putchar('\n');
	return (0);
}

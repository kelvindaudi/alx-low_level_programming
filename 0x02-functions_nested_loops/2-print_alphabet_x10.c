#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int x;

	while (i <= 9)
	{
	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	i++
	}
}

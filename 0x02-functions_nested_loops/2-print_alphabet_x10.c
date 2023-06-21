#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i;
	int x;

	for (x = 1; i <= 10; i++)
	{
	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}
	 _putchar('\n');
	}
}

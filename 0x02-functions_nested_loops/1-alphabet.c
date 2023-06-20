#include "main.h"
/**
 * print_alphabet -  prints the alphabet in lowercase
 * return: always 0 (Successful)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

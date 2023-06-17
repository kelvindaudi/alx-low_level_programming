#include <stdio.h>
/**
 *main - Entry point
 *prints all single digit numbers of base 10 starting 0, followed by a new line
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}

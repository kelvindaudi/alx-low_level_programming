#include <stdio.h>
/**
 * main - Entry point
 *Description: prints all aphabets except e and q
 *
 *Return: returns 0 when the program executes successfully
 */
int main(void)
{
	char e;

	for (e = 'a'; e <= 'z'; e++)
	{
		if (e != 'e' && e != 'q')
		{
			putchar(e);
		}
	}
	putchar('\n');
	return (0);
}

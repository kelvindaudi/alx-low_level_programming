#include <stdio.h>
/**
 *main - Entry point
 *Return: returns 0 when the program executes successfully
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

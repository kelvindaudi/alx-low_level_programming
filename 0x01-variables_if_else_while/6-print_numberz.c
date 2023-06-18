#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *Return: returns 0 when the program executes successfully
 */
int main(void)
{
	int b;

	for (b = 0; b <= 9; b++)
	{
		putchar(b + '0');
	}
	putchar('\n');
	return (0);
}

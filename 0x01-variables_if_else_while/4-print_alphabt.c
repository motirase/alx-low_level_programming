#include <stdio.h>
/**
 *main - entry point
 *
 *Description: Print lower case alphabet excluding e and q
 *Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
	if (c != 'e' && c != 'q')
		putchar(c);
	}

	putchar('\n');

	return (0);
}

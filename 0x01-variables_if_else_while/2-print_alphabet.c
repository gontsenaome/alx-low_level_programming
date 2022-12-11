#include <stdio.h>

/**
 * main - prints alpha lower case
 * Return: Always 0
*/
int main(void)
{
	char lc;

	for (lc =  'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}

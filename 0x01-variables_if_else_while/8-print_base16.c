#include <stdio.h>
/**
 * main -Entry point 
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}	

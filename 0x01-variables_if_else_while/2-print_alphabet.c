#include <stdio.h>
/**
 * main: main block
 * Description: To print the alphabet in lowercase use 'putchar' function. * Return: 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}

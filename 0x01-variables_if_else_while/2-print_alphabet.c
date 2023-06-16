#include <stdio.h>
/**
 * main - main block
 * Description: To print the alphabet in lowercaseuse 'putchar' function. * Return: 0
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

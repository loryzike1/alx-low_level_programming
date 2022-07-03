#include <stdlib.h>
#include <stdio.h>

/**
 *main - Prints all single digit numbers of base 10 starting from 0.
 *followed by a new line
 *
 *Return: 0 if Success
 **/
int main(void)
{
	char d = '0';

	while (d <= '9')
	{
	putchar(d);
	d++;
	}
	putchar('\n');
	return (0);
}

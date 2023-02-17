#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * this is my 1st discription :)
 * its a simple function taht return a message
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 10; i < 20; i++)
	{
		putchar((i % 10) + '0');
		if (i != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

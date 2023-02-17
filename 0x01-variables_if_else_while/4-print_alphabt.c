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
	char a;

	for (a = 'a'; a <= 'z' ; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}

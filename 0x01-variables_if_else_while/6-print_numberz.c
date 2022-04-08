#include<stdio.h>
/**
 * main - entrypoint
 *Description: prints base 10 digits
 *Return: 0 after printing
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar( a);
	}
	putchar('\n');
	return (0);
}

#include<stdio.h>
#include<string.h>
/**
* main - entrypoint
* Description: Prints base 16 numbers
* Return: 0
*/
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a % 10 + '0');
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

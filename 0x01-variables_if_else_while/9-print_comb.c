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
		if (a == 9)
		{
			putchar(a % 10 + '0');
		}
		else
		{
			putchar(a % 10 + '0');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}

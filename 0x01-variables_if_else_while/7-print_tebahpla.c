#include <stdio.h>
#include<string.h>
/**
 * main - entrypoint
 *Description: prints the alphabet
 *Return: 0 after printing
 */
int main(void)
{
	char lowerCase[] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = (int)strlen(lowerCase) - 1; a >= 0; a--)
	{
		putchar(lowerCase[a]);
	}
	putchar('\n');
	return (0);
}

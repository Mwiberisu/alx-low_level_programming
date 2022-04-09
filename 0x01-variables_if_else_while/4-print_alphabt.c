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
	unsigned int a;

	for (a = 0; a < strlen(lowerCase); a++)
	{
		if ((lowerCase[a] != 'q') && lowerCase[a] != 'e')
		{
			putchar(lowerCase[a]);
		}
	}
	putchar('\n');
	return (0);
}

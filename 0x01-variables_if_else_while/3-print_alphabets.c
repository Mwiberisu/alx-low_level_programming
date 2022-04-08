#include <stdio.h>
#include<string.h>

/**
 * main - entrypoint
 *Description: prints the alphabet
 *Return: 0 after printing
 */
int main(void)
{
	char lowerCase[]="abcdefghijklmnopqrstuvwxyz";
    char upperCase[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int a = 0; a < strlen(lowerCase); a++)
    {
        putchar(lowerCase[a]);
    }
    for(int b = 0; b < strlen(upperCase); b++)
    {
        putchar(upperCase[a]);
    }
    putchar("\n");
	return (0);
}
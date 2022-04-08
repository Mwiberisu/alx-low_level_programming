#include<stdio.h>
#include<string.h>
/**
* main - entrypoint
* Description: Prints base 16 numbers
* Return: 0
*/
int main(void)
{
	char nums[] = "0123456789abcdef";
	unsigned int a;

	for(a = 0; a< strlen(nums); a++)
	{
		putchar(nums[a]);
	}
	putchar('\n');
	return (0);
}

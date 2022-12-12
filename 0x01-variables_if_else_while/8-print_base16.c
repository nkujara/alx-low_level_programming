#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints all single digits of base 16 followed by new line
 *
 * Return: returns 0
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
        {
		putchar(i);
	}

        for (i = 'a'; i <= 'f'; i++
        
        {
                putchar(i);
	}
        
	putchar('\n');

	return (0);
}

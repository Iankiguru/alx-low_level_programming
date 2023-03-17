#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = i;
		
		while (j < 10)
		{
			putchar(i + '0');
			putchar(j + '0');
			
			if (i != 9 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}

			j++;
		}
		
		i++;
	}
	putchar('\n');
	
	return (0);
}

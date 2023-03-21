#include <stdio.h>
/**
*main - executes the code 
* Returns: the sum of the relevant int
*/
int main()
{
	int sum = 0;

	int i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum +=i;
		}
	}
	printf("%d\n", sum);
	return (0);

}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	long unsigned int i, j;
	int sum = 0;

	if (argc == 0)
	{
		puts("0");
		return (0);
	}

	for (i = 0; i < (long unsigned int)argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] < '0' && argv[i][j] > '9')
			{
				puts("Error");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}		

	printf("%d\n", sum);
	
	return (0);
}

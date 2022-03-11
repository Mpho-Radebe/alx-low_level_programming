#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - prints the last time of random number
 * Return: returns 0 for successful execution
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	int lastDigit;
	lastDigit = n % 10;
	
	char* outputMessage = "";
	if (lastDigit > 5)
		outputMessage = "and is greater than 5";
	else if (lastDigit == 0)
		outputMessage = "and is 0";
	else if (lastDigit < 6)
		outputMessage = "and is less than 6 and not 0";
	
	printf ("Last digit of %d is %d %s", n, lastDigit, outputMessage);
	
	return (0);
}

#include "main.h"
#include <ctype.h>

/**
 * leet - a function
 * @str: string
 * Return: string 
 */
char *leet(char *str)
{
	int i = 0;
	char c;
	int digit[] = {
		4, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 1, 0,
		0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0
	};

	while ((c = tolower(str[i])) != '\0')
	{
		if (c == 'a' || c == 'e' || c == 'o' || c == 't' || c == 'l')
			str[i] = '0' + digit[c - 'a'];
		i++;
	}
	
	return (str);
}
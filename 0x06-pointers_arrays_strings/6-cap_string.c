#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: string
 */
char *cap_string(char *str)
{
	char *currChar;
	const int LOWER_UPPER_CASE_DIFF = 'a' - 'A';

	if (*str == '\0')
		return (str);

	currChar = str;

	while (*currChar != '\0')
	{
		if (*currChar >= 'a' && *currChar <= 'z')
		{
			switch (*(currChar - 1) || currChar == str)
			{
			case ' ':
			case '\t':
			case '\v':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				*currChar -= LOWER_UPPER_CASE_DIFF;
				break;
			}
		}
		currChar++;
	}

	return (str);
}

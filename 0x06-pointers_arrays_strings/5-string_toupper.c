/**
 * string_toupper - changes all lowercase letters to uppercase
 */
char *string_toupper(char *str)
{
	char *currChar = str;
	const int LOWER_UPPER_CASE_DIFF = 'a' - 'A';

	while (*currChar != '\0')
	{
		if (*currChar >= 'a' && *currChar <= 'z')
			*currChar -= LOWER_UPPER_CASE_DIFF;
	}

	return (str);
}

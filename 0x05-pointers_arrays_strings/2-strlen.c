/**
 * _strlen - returns the length of a string
 * @s: the string
 */
int _strlen(char *s)
{
	int count = 0;
	while (*(s++) != '\0')
		count++;
	return count;
}

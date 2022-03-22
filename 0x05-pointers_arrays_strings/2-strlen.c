/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s++) != '\0')
		count++;
	return (count);
}

#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	unsigned int max_len;
	char *result;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	max_len = len2 > n ? len1 + len2 : len1 + n;

	if (len1 == 0 && len2 == 0)
		return (NULL);

	result = malloc(sizeof(char) * (max_len + 1));
	result[max_len] = '\0';

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (i = len1;  i < len1 + len2 && i < len1 + n; i++)
		result[i] = s2[i - len1];

	return (result);
}


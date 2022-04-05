#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates strings
 * @s1: string 1
 * @s2: string 2
 * Return: a pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int s1_size = 0;
	unsigned int s2_size = 0;
	unsigned int i;

	if (s1 != NULL)
		s1_size += strlen(s1);
	if (s2 != NULL)
		s2_size += strlen(s2);

	concat_str = malloc(sizeof(char) * (s1_size + s2_size + 1));

	if (concat_str == NULL)
	{
		fprintf(stderr, "failed memory allocation");
		return NULL;
	}

	concat_str[s1_size + s2_size] = '\0';
	for (i = 0; i < s1_size; i++)
		concat_str[i] = s1[i];

	for (i = 0; i < s2_size; i++)
		concat_str[s1_size + i] = s2[i];

	return concat_str;
}

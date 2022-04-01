#include "main.h"

/**
 * wildcmp - wild cards
 * @s1: string 1
 * @s2: string 2
 * Return: 1 Or 0
 */
int wildcmp(char *s1, char *s2)
{
	char *wildchar, *nowildchar;

	if (*s1 == '*' || *s1 == *s2 || *s2 == '*')
	{
		if (*s1 == *s2 && *s1 == '*')
		{
			s1++;
			s2++;
		}
		else if (*s1 == '*' || *s2 == '*')
		{
			if (*s1 == '*')
			{
				wildchar = s1;
				nowildchar = s2;
			}
			else
			{
				wildchar = s2;
				nowildchar = s1;
			}
			if (*(wildchar + 1) == '*')
				wildchar++;
			else if (*nowildchar == '\0')
				wildchar++;
			else if (*(wildchar + 1) == *nowildchar)
				wildchar++;
			else
				nowildchar++;
			s1 = nowildchar;
			s2 = wildchar;
		}
		else
		{
			if (*s1 == *s2 && *s1 == '\0')
				return (1);
			s1++;
			s2++;
		}
		return (wildcmp(s1, s2));
	}
	return (0);
}

#include <stddef.h>
#include <ctype.h>
#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: the string
 * Return: string
 */
char *rot13(char *str)
{
	char *str_cpy = str;
	int i;

	rot13_p rot_map[] = {
		{'A', 'N'}, {'B', 'O'}, {'C', 'P'}, {'D', 'Q'},
		{'E', 'R'}, {'F', 'S'}, {'G', 'T'}, {'H', 'U'},
		{'I', 'V'}, {'J', 'W'}, {'K', 'X'}, {'L', 'Y'},
		{'M', 'Z'}, {'a', 'n'}, {'b', 'o'}, {'c', 'p'},
		{'d', 'q'}, {'e', 'r'}, {'f', 's'}, {'g', 't'},
		{'h', 'u'}, {'i', 'v'}, {'j', 'w'}, {'k', 'x'},
		{'l', 'y'}, {'m', 'z'}, {'N', 'A'}, {'O', 'B'},
		{'P', 'C'}, {'Q', 'D'}, {'R', 'E'}, {'S', 'F'},
		{'T', 'G'}, {'U', 'H'}, {'V', 'I'}, {'W', 'J'},
		{'X', 'K'}, {'Y', 'L'}, {'Z', 'M'}, {'n', 'a'},
		{'o', 'b'}, {'p', 'c'}, {'q', 'd'}, {'r', 'e'},
		{'s', 'f'}, {'t', 'g'}, {'u', 'h'}, {'v', 'i'},
		{'w', 'j'}, {'x', 'k'}, {'y', 'l'}, {'z', 'm'}
	};

	while (str != NULL && *str != '\0')
	{
		i = 0;
		while (i < 26 * 2)
		{
			if (rot_map[i].from == *str)
			{
				*str = rot_map[i].to;
				break;
			}
			i++;
		}
		str++;
	}

	return (str_cpy);
}

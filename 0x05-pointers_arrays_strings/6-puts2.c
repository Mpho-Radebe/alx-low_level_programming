/**
 * puts2 - prints every other character
 * @str: the string
 */
void puts2(char *str)
{
	str--;
	while (*(str++) != '\0')
	{
		if (*str != '\0')
		{
			putchar(*str);
			str++;
		}
	}
}

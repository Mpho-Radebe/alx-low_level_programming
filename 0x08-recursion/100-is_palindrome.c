#include <string.h>

/**
 * is_palindrome_recursion - checks if a string is a palindrome
 * @s: a string
 * @left: the left
 * @right: the right
 * Return: 1 0r 1
 */
int is_palindrome_recursion(char *s, int left, int right)
{
	if (left > right)
		return (1);
	if (s[left] != s[right])
		return (0);
	return (is_palindrome_recursion(s, left + 1, right - 1));
}

/**
 * is_palindrome - palindrome
 * @s: a string
 * Return: 1 0r 1
 */
int is_palindrome(char *s)
{
	return (is_palindrome_recursion(s, 0, strlen(s) - 1));
}

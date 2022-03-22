/**
 * rev_string - reverses a string
 * @s: the string
 */
void rev_string(char *s)
{
	char temp;
	char *left = s;
	char *right = s;


	while (*right != '\0')
		right++;

	right--;
	while (right > left)
	{
		temp = *right;
		*right = *left;
		*left = temp;
		right--;
		left++;
	}
}

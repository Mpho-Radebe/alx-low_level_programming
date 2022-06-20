char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *cap_string(char *str);
char *string_toupper(char *str);
char *rot13(char *);
void print_number(int n);
void _putchar(char ch);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 */
typedef struct rot13_pair
{
	char from;
	char to;
} rot13_p;

/**
 * print_name - prints a name
 * @name: the name
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
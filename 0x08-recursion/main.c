#include "main.h"
#include <stdio.h>

int main(void)
{
	putchar('0' + wildcmp("holberton.c", "h*c"));
	putchar('\n');
	return (0);
}

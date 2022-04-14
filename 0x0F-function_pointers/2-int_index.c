/**
 * int_index - searches for an integer
 * @array: the array
 * @size: the size of the array
 * @cmp: the comparator
 * Return: the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (comp(i))
			return (i);
	}

	return (-1);
}

/**
 * array_iterator - iterates
 * @array: the array
 * @size: the size of the array
 * @action: the action performed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}

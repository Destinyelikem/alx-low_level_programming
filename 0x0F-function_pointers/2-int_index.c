/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: number of elements in an array
 * @cmp: pointer to function used to compare values
 *
 * Return: index of first element
 * -1 if no elment is found pr size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	res = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (res0);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				res = i;
				break;
			}
			if ((cmp(array[i]) == (-1)))
			{
				return (res);
			}
		}
	}
	return (res);
}

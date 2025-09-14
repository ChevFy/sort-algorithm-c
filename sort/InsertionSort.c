#include "sort.h"

void	InsertionSort(int *arr, int size)
{
	int j, key;
	for (int i = 1; i < size; i++)
	{
		j = i - 1;
		key = arr[i];
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
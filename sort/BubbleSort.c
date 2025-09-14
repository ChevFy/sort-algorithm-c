#include "sort.h"

void	BubbleSort(int *arr, int size)
{
	bool	swapped;
	int		temp;

	for (int i = size - 1; i > 0; i--)
	{
		swapped = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapped = true;
			}
		}
		if (!swapped)
			break ;
	}
}

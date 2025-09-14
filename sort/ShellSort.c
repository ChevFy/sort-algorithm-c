#include "sort.h"

void	ShellSort(int *arr, int size)
{
	int j, key;
	int gap = size / 2 ;
	while (gap > 0)
	{
		for (int i = gap ; i < size; i++)
		{
			j = i - gap;
			key = arr[i];
			while (j >= 0 && arr[j] > key)
			{
				arr[j + gap] = arr[j];
				j-=gap;
			}
			arr[j + gap] = key;
		}
		gap = gap /2;
	}
}
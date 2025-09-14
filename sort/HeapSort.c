
#include "sort.h"

void	heapify(int *arr, int size, int i)
{
	int	max;
	int	left;
	int	right;
	int	temp;

	max = i;
	left = 2 * i + 1;
	right = 2 * i + 2;

	if (left < size && arr[left] > arr[max])
		max = left;
	if (right < size && arr[right] > arr[max])
		max = right;
	if (max != i)
	{
		temp = arr[i];
		arr[i] = arr[max];
		arr[max] = temp;
		heapify(arr, size, max);
	}
}

void	HeapSort(int *arr, int size)
{
	int	temp;

	// create Heap
	for (int i = size / 2 - 1; i >= 0; i--)
		heapify(arr, size, i);
	
	for (int i = size - 1; i > 0; i--)
	{
		temp = arr[0];
		arr[0] = arr[i];
		arr[i] = temp;
		heapify(arr, i, 0);
	}
}

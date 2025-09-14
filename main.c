#include "sort/sort.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int size;
	int mode;
	printf("Enter size : ");
	scanf("%d", &size);
	int *arr = (int *)malloc(sizeof(int) * size);
	if (arr == NULL)
		return (1);
	printf("Enter Number : ");
	for (int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	printf("Please Select Sort mode\n");
	printf("1 Bubble Sort\n");
	printf("2 Selection Sort\n");
	printf("3 Insetion Sort\n");
	printf("4 Shell Sort\n");
	printf("5 Heap Sort\n");
	printf("6 Merge Sort\n");
	printf("7 Quick Sort\n");


	printf("Enter mode : ");
	scanf("%d", &mode);

	if (mode == 1)
		BubbleSort(arr, size);
	if (mode == 2)
		SelectionSort(arr, size);
	if (mode == 3)
		InsertionSort(arr, size);
	if (mode == 4)
		ShellSort(arr, size);
	if (mode == 5)
		HeapSort(arr, size);
	if (mode == 6)
		MergeSort(arr, 0 , size-1);
	if (mode == 7)
		QuickSort(arr, 0 , size-1);



	printf("Sorted: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	free(arr);
	return (0);
}
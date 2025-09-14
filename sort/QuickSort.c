#include "sort.h"

void swap(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;    
}

int Partition(int *arr, int low, int high)
{
    int i = low - 1;
    int pivot = arr[high];
    for (int j = low ; j < high ; j++) 
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    i++;
    swap(&arr[i], &arr[high]);  
    return i;
}

void QuickSort(int *arr , int low, int high)
{
    if (low < high)
    {
        int pivot = Partition(arr, low, high);

        QuickSort(arr, low , pivot - 1);
        QuickSort(arr, pivot + 1 , high);
    }
}

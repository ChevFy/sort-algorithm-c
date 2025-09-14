#ifndef SORT_H

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

void BubbleSort(int *arr, int size);
void SelectionSort(int *arr, int size);
void InsertionSort(int *arr, int size);
void	ShellSort(int *arr, int size);
void	heapify(int *arr, int size, int i);
void	HeapSort(int *arr, int size);
void Merge(int *arr, int left , int mid , int right);
void MergeSort(int *arr, int left , int right);
void QuickSort(int *arr , int low, int high);
int Partition(int *arr, int low, int high);
void swap(int *a , int *b);

#endif
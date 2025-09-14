CC := gcc
CFLAGS := -Wall -Wextra -std=c11
OBJ := main.o sort/BubbleSort.o sort/SelectionSort.o sort/InsertionSort.o sort/ShellSort.o sort/HeapSort.o sort/MergeSort.o \
		sort/QuickSort.o

all: main

main: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)\

main.o: main.c sort/sort.h
	$(CC) $(CFLAGS) -c $< -o $@

sort/%.o: sort/%.c sort/sort.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) main

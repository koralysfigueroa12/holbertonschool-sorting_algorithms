#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * print_array - Prints an array of integers
 * @array: The array to print
 * @size: Number of elements in the array
 */
void print_array(const int *array, size_t size);

/**
 * bubble_sort - Sorts an array of integers using Bubble sort
 * @array: The array to sort
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size);

#endif

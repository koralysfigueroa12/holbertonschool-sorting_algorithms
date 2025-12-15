#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/* Struct for doubly linked list used in insertion sort */
typedef struct listint_s
{
    int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* Prototypes for printing arrays and lists */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Sorting algorithms prototypes */
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void bubble_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void shell_sort(int *array, size_t size);

#endif /* SORT_H */

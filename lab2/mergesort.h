#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void *my_memcpy(void* dst, const void* src, size_t n);

static int int_compare(const void* p1, const void* p2);

void merge(void* base, size_t num, size_t el_size, size_t size, int (*compar)(const void*, const void*));

void merge_sort(void* base, size_t num, size_t el_size, int (*compar)(const void*, const void*));

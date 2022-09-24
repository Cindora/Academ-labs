#include "mergesort.h" 

#define ARRAY_LEN 10

static int int_compare(const void* p1, const void* p2) {
    int left = *(const	int*)p1;
    int right = *(const int*)p2;

    return ((left > right) - (left < right));
}

void *my_memcpy(void* dst, const void* src, size_t n) {
    for (size_t i = 0; i < n; i++)
        ((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
    return dst;
}


void merge(void* base, size_t num, size_t el_size, size_t size, int (*compar)(const void*, const void*)) {
    size_t split = size * el_size;
    char *first = malloc(split);
    char *p1 = my_memcpy(first, base, split);
    char *dest = base;
    char *p2 = dest + split;
    size_t i = 0, j = size;
    while (i < size) {
        if (j == num || compar(p1, p2) <= 0) {
            for (size_t k = 0; k < el_size; k++)
                *dest++ = *p1++;
            i++;
        }
        else {
            for (size_t k = 0; k < el_size; k++)
                *dest++ = *p2++;
            j++;
        }
    }
    free(first);
}


void merge_sort(void* base, size_t num, size_t el_size, int (*compar)(const void*, const void*)) {
    if (num > 1) {
        size_t s = num / 2;
        char* char_base = base;
        merge_sort(char_base, s, el_size, compar);
        merge_sort(char_base + s * el_size, num - s, el_size, compar);
        merge(char_base, num, el_size, s, compar);
    }
}

int main(void){

    int int_array[ARRAY_LEN];
    for (size_t k = 0; k < ARRAY_LEN; k++) {  // Array completion and output
        int_array[k] = rand() % 100;
        printf("%d ", int_array[k]);
    }
    puts("\n");


    size_t array_size = sizeof(int_array) / sizeof(int_array[0]);

    merge_sort(&int_array, array_size, sizeof(int_array[0]), int_compare);  // Array sort


    for (size_t k = 0; k < array_size; k++)  // Array output
        printf("%d ", int_array[k]);

    puts("");

    return 0;
}
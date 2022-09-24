//#include "mergesort.c"
//
//int main(void) {
//
//    int int_array[ARRAY_LEN];
//    for (size_t k = 0; k < ARRAY_LEN; k++) {  // Array completion and output
//        int_array[k] = rand() % 100;
//        printf("%d ", int_array[k]);
//    }
//    puts("\n");
//
//
//    size_t array_size = sizeof(int_array) / sizeof(int_array[0]);
//
//    merge_sort(&int_array, array_size, sizeof(int_array[0]), int_compare);  // Array sort
//
//
//    for (size_t k = 0; k < array_size; k++)  // Array output
//        printf("%d ", int_array[k]);
//
//    puts("");
//
//    return 0;
//}
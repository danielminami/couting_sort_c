#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void printArray(int arr[], int size) {
    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    
    int arr[] = {10, 44, 2, 4, 14, 3, 4, 5, 1, 90};
    int size = sizeof(arr)/sizeof(int);
    //quickSort(arr, size);
    printArray(arr, size);
    
    exit(0);
}
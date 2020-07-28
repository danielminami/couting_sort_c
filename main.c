#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void printArray(int arr[], int size) {
    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int generateRandomNumber(int lower, int upper) {
    return (rand() % (upper - lower + 1)) + lower;
}

int max(int arr[], int size) {
    int max = 0;
    for (int i=0; i<size; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

void countSort(int arr[], int arrSize, int countArray[], int countArraysize) {
    for (int i=0; i<arrSize; i++) {
        countArray[arr[i]-1]++;
    }
    
    int k = 0;
    for (int j=0; j<countArraysize; j++) {
        while (countArray[j] != 0) {
            arr[k++] = j+1;
            countArray[j]--;
        }
    }
}

int main() {
    
    srand(time(0));
    int *arr, n = 20, i;
    arr = (int*) malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
        arr[i] = generateRandomNumber(1,100);
    
    
    int biggest = max(arr, n);
    int* countArray = (int*) calloc(biggest, sizeof(int));;
    
    printf("Before sorting: \n");
    printArray(arr, n);
    
    countSort(arr, n, countArray, biggest);   
    
    printf("After sorting: \n");
    printArray(arr, n);
    exit(0);
}
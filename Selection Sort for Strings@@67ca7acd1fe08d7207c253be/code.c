#include <stdio.h>
#include <string.h>

void swap(char str1[], char str2[]) {
    char temp[100];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

void selectionSort(char arr[][100], int n) {
    for (int j = 0; j < n - 1; j++) {
        for (int k = 0; k < n - j - 1; k++) {
            if (strcmp(arr[k], arr[k + 1]) > 0) {
                swap(arr[k], arr[k + 1]);
            }
        }
    }
}

void printArray(char arr[][100], int n) {
    for (int z = 0; z < n; z++) {
        printf("%s ", arr[z]);
    }
    printf("\n");
}
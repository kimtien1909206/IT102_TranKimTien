#include <stdio.h>
int main() {
    int arr[] = {4, 13, 8, 6, 12, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}


#include <stdio.h>
int main() {
    int arr[] = {8, 3, 11, 4, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < size; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}


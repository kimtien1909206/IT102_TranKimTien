#include <stdio.h>
void updateElement(int *arr, int size, int pos, int newValue) {
    if (pos >= 0 && pos < size) {
        *(arr + pos) = newValue;
    } else {
        printf("Vi tri %d khong hop le!\n", pos);
    }
}
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int size = 5;
    printf("Mang ban dau: ");
    printArray(numbers, size);
    updateElement(numbers, size, 2, 99);
    printf("Mang sau khi cap nhat: ");
    printArray(numbers, size);
    return 0;
}


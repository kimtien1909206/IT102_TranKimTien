#include <stdio.h>
void arr(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}
int main() {
    int str[] = {4, 2, 9, 10, 1};
    int n = sizeof(str) / sizeof(str[0]);
    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(str + i));
    }
    arr(str, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", *(str + i));
    }
    return 0;
}


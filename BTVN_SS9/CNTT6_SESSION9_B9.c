#include <stdio.h>
int main() {
    int arr[] = {1, 3, 2, 5, 3, 2, 3, 3, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxCount = 0, mostFrequent;
    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }
    printf("Phan tu xuat hien nhieu nhat la: %d (xuat hien %d lan)\n", mostFrequent, maxCount);
    return 0;
}

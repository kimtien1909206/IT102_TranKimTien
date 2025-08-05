#include <stdio.h>

int main()
{
    int arr[100];
    int number;
    printf("Moi ban nhap vao so phan tu cua mang: ");
    scanf("%d", &number);
    for (int i = 0; i < number;) {
        int temp;
        printf("arr[%d] = ", i);
        scanf("%d", &temp);
        if (temp % 2 == 0) {
            printf("Yeu cau nhap lai !!.\n");
        } else {
            arr[i] = temp;
            i++;
        }
    }
    printf("Mang sau khi nhap la :\n");
    for (int i = 0; i < number; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

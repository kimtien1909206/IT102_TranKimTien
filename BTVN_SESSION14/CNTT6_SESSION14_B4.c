#include <stdio.h>
int add(int arr[], int size){
int max = arr[0];
for (int i = 0; i < size; i++)
    if (max < arr[i]) {
        max = arr[i];
}
return max;
}
int main () {
int arr[] = { 1,2,3,4,5,6};
int size = sizeof(arr)/sizeof(arr[0]);
printf ("So lon nhat trong mang la : %d", add(arr, size));
return 0;
}

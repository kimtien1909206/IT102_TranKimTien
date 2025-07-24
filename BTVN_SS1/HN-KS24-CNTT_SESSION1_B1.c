#include <stdio.h>

int main() {
//số nguyên ngắn
short num1 = 1;
// số nguyên chuẩn
int num2 = 12;
// số nguyên dài
long num3 = 123;
// số nguyên rất dài
long long num4 = 12345;
// số nguyên không âm ngắn
unsigned short num5 = 123456;
// số nguyên không âm dài
unsigned long num6 = 1234567;
//số nguyên không âm rất dài
unsigned long long num7 = 1234567890;
//ký tự
char num8 = 'A';
printf("short: %d\n", num1);
printf("int: %d\n", num2);
printf("long: %d\n", num3);
printf("long long: %d\n", num4);
printf("unsigned short: %d\n", num5);
printf("unsigned long: %d\n", num6);
printf("unsigned long long: %d\n", num7);
printf("char: %c\n", num8);
return 0;
}
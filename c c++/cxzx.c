#include<stdio.h>
int main() {
    int a1,a2,a3,a4,a5,a6;
    int n,x;
    a1=200,a2=100,a3=50,a4=20,a5=10,a6=5;
    printf("nhập số lượng và loại giỏ (từ giỏ 1 đến giỏ 6):\n");
    scanf("%d%d", &n, &x);
    if (x = 1) {
        printf("%d Xu", n * a1);
    }   else if (x = 2) {
        printf("%d Xu", n * a2);
    }   else if (x = 3) {
        printf("%d Xu", n * a3);
    }   else if (x = 4) {
        printf("%d Xu", n * a4);
    }   else if (x = 5) {
        printf("%d Xu", n * a5);
    }   else {
        printf("%d Xu", n * a6);
    }
    return 0;
}
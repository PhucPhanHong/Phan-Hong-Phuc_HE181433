#include <stdio.h>
int main() {
    int num1, num2, kq;
    char sign;

    printf("Nhap gia tri cua so 1: ");
    scanf("%d", &num1);

    printf("Nhap gia tri cua so 2: ");
    scanf("%d", &num2);

    printf("Nhap gia tri cua dau: ");
    scanf(" %c", &sign);  

    switch (sign) {
        case '+':
            kq = num1 + num2;
            printf("%d", kq);
            break;
        case '-':
            kq = num1 - num2;
            printf("%d", kq);
            break;
        case '*':
            kq = num1 * num2;
            printf("%d", kq);
            break;
        case '/':
            if (num2 != 0) {
                kq = num1 / num2;
                printf("%d", kq);
            } else {
                printf("Gia tri khong hop le");
            }
            break;
        default:
            printf("Giatriloi");
            break;
    }
    return 0;
}

#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Nhap cac so nguyen (nhap 0 de dung):\n");
   Do{ printf("Nhap mot so nguyen: ");
        scanf("%d", &num);
        sum += num;
        printf("Tong hien tai: %d\n", sum);
        if (num == 0) {
            printf(" Dung lai.\n");
            break;
        }
    printf("Tong: %d\n", sum);
    return 0;
}


#include <stdio.h>
#include <math.h>
int main() {
    int num, sum = 0;
    printf("Nhap cac so nguyen (nhap 0 de dung):\n");
    do{printf("Nhap mot so nguyen: ");
        scanf("%d", &num);
        sum += num;
        printf("Tong hien tai: %d\n", sum);
	}
	while (num != 0);

    printf("Tong: %d\n", sum);
    return 0;
}

#include <stdio.h>
int main() {
    int x, y;
    do {
        printf("so nguyen x:");
        scanf("%d", &x);
        printf("so nguyen y: ");
        scanf("%d", &y);
        if (x == 0) {
            printf("Chuong tr�nh k?t th�c.\n");
            break;
        }
        if (y == 0) {
            printf("Chuong tr�nh k?t th�c.\n");
            break;
        }
        int t = x;
        x = y;
        y = t;
        printf("hoan doi : %d, %d\n", x, y);
    } while (1);
    return 0;
}


#include <stdio.h>

int main() {
    char c1, c2, t, c;
    
    printf("ki tu 1 : ");
    scanf(" %c", &c1);

    printf("ki tu 2 : ");
    scanf(" %c", &c2);

    if (c1 > c2) {
        t = c1;
        c1 = c2;
        c2 = t;
    }

    int d = c2 - c1;

    printf("Su khac biet giua %c va %c là: %d\n", c1, c2, d);
	for (c = c1; c <= c2; c) {
        printf("%c : %d, %o, %X\n", c, c, c, c);
        break;
    }
    return 0;
}


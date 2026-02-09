#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    unsigned char a, b, c;

    a = n / 100;        // сотні
    b = (n / 10) % 10; // десятки
    c = n % 10;        // одиниці

    if (a != b && a != c && b != c) {
        printf("%d%d%d\n", a, b, c);
        printf("%d%d%d\n", a, c, b);
        printf("%d%d%d\n", b, a, c);
        printf("%d%d%d\n", b, c, a);
        printf("%d%d%d\n", c, a, b);
        printf("%d%d%d\n", c, b, a);
    } else {
        printf("Цифри не всі різні\n");
    }

    return 0;
}

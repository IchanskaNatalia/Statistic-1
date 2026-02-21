#include <stdio.h>

int main() {
    double a;
    scanf("%lf", &a);

    printf("- | - | %.2f | - | -\n", a);
    printf("- | %.2f | %.2f | %.2f | -\n", a, a, a);
    printf("%.2f | %.2f | %.2f | %.2f | %.2f\n", a, a, a, a, a);

    return 0;
}
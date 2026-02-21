#include <stdio.h>
#include <math.h>

// identity з обмеженням 1001
double identity_limit(double x) {
    if (x > 1001) return 1001;
    return x;
}

// softplus з обмеженням 1001
double softplus_limit(double x) {
    double val = log(1 + exp(x));
    if (val > 1001) return 1001;
    return val;
}

int main() {
    double x, y, z;

    // Вводимо три числа
    printf("Введи x: ");
    scanf("%lf", &x);
    printf("Введи y: ");
    scanf("%lf", &y);
    printf("Введи z: ");
    scanf("%lf", &z);

    // Виводимо результати
    printf("identity_limit(x) = %f\n", identity_limit(x));
    printf("identity_limit(y) = %f\n", identity_limit(y));
    printf("identity_limit(z) = %f\n", identity_limit(z));

    printf("softplus_limit(x) = %f\n", softplus_limit(x));
    printf("softplus_limit(y) = %f\n", softplus_limit(y));
    printf("softplus_limit(z) = %f\n", softplus_limit(z));

    return 0;
}
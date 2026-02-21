#include <stdio.h>
#include <math.h>

// identity
double identity(double x) {
    return x;
}

// softplus
double softplus(double x) {
    return log(1 + exp(x));
}

int main() {
    double x1, x2;

    // Вводимо два числа
    printf("Введи перше число: ");
    scanf("%lf", &x1);
    printf("Введи друге число: ");
    scanf("%lf", &x2);

    // Обчислюємо і показуємо результати
    printf("identity(%f) = %f\n", x1, identity(x1));
    printf("identity(%f) = %f\n", x2, identity(x2));

    printf("softplus(%f) = %f\n", x1, softplus(x1));
    printf("softplus(%f) = %f\n", x2, softplus(x2));

    return 0;
}
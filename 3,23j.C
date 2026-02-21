#include <stdio.h>
#include <math.h>

// LeakyReLU
double leakyReLU(double x, double a) {
    if (x >= 0) return x;
    return a * x;
}

double leakyReLU_derivative(double x, double a) {
    if (x >= 0) return 1.0;
    return a;
}

// eReLU
double eReLU(double x, double a) {
    if (x >= 0) return 0.0;
    return a * (exp(x) - 1);
}

double eReLU_derivative(double x, double a) {
    if (x >= 0) return 0.0;
    return a * exp(x);
}

int main() {
    double x, a;

    printf("Введи x: ");
    scanf("%lf", &x);
    printf("Введи a: ");
    scanf("%lf", &a);

    printf("leakyReLU(%f, %f) = %f\n", x, a, leakyReLU(x, a));
    printf("leakyReLU_derivative(%f, %f) = %f\n", x, a, leakyReLU_derivative(x, a));

    printf("eReLU(%f, %f) = %f\n", x, a, eReLU(x, a));
    printf("eReLU_derivative(%f, %f) = %f\n", x, a, eReLU_derivative(x, a));

    return 0;
}
#include <stdio.h>
#include <math.h> // тут для exp і log

// Функція identity: просто повертає x
double identity(double x) {
    return x;
}

// Похідна identity: завжди 1
double identity_derivative(double x) {
    return 1.0;
}

// Функція softplus: ln(1 + e^x)
double softplus(double x) {
    return log(1 + exp(x));
}

// Похідна softplus: 1 / (1 + e^-x)
double softplus_derivative(double x) {
    return 1 / (1 + exp(-x));
}

int main() {
    double x = 2.0; // пробуємо число 2

    printf("identity(%f) = %f\n", x, identity(x));
    printf("identity_derivative(%f) = %f\n", x, identity_derivative(x));
    printf("softplus(%f) = %f\n", x, softplus(x));
    printf("softplus_derivative(%f) = %f\n", x, softplus_derivative(x));

    return 0;
}
#include <stdio.h>

// Функція identity з обмеженням
double identity_limit(double x) {
    if (x < 7) {
        return x;  // повертаємо x тільки якщо менше 7
    } else {
        return 1;  // інакше повертаємо 1
    }
}

// Функція softplus з обмеженням
#include <math.h>
double softplus_limit(double x) {
    if (x < 7) {
        return log(1 + exp(x));  // ln(1+e^x) тільки якщо менше 7
    } else {
        return 1;  // інакше повертаємо 1
    }
}

int main() {
    double nums[] = {3, 5, 7, 10};  // приклади чисел
    int n = 4;

    for (int i = 0; i < n; i++) {
        printf("identity_limit(%f) = %f\n", nums[i], identity_limit(nums[i]));
        printf("softplus_limit(%f) = %f\n", nums[i], softplus_limit(nums[i]));
    }

    return 0;
}
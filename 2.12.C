#include <stdio.h>
#include <math.h>

int main() {
    double r, h;
    scanf("%lf %lf", &r, &h);

    double V = M_PI * r * r * h / 3;
    printf("%.3f\n", V);

    return 0;
}
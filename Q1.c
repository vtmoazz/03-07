#include <stdio.h>

int main() {
    double a, b, average;

    printf("enter two number: ");
    scanf("%lf%lf", &a, &b);

    average = (a + b) / 2.0;

    printf("OUTPUT\n%.2f\n", average);

    return 0;
}

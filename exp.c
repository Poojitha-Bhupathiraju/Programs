#include <stdio.h>

int main() {
    int a, b, i, j;
    float c;
    double d;
    float result1;
    int result2;

    printf("Enter values for a (int), b (int), c (float), d (double), i (int): ");
    scanf("%d %d %f %lf %d", &a, &b, &c, &d, &i);

    result1 = (a / b) * c - b + (a * d / 3);
    result2 = (i++) + (++i);

    printf("\nResult of (a / b * c - b + a * d / 3): %.2f\n", result1);
    printf("Result of j = (i++) + (++i): %d\n", result2);

    return 0;
}

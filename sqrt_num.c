#include <stdio.h>
#include <math.h>

int main() 
{
    float number, result;

    printf("Enter a number: ");
    scanf("%f", &number);
        result = sqrt(number);
        printf("%.2f\n", result);
}

#include <stdio.h>

int main() {
    float x;
    float y;
    float sum;
    float average;

    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);
    // scanf(");

    sum = x + y;
    average = sum / 2;

    printf("Totals: \n %.2f", sum);
    printf("\n");
    printf("Average: \n %.2f", average);

    return 0;
}

#include <stdio.h>

int main() {
    double numbers[10];
    double sum = 0.0;
    double mean;

    printf("Enter 10 numbers:\n");

    for(int i = 0; i < 10; i++) {
        printf("Value %d: ", i + 1);
        scanf("%lf", &numbers[i]);
        sum += numbers[i];
    }

    mean = sum / 10;
    printf("\n--- Results ---\n");
    printf("Sum  = %.2lf\n", sum);
    printf("Mean = %.2lf\n", mean);

    return 0;
}

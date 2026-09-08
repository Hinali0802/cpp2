#include <stdio.h>

int main() {
    int n;
    double value;
    double sum = 0.0;
    double mean;
    printf("Enter the total number of values (N): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);

    for(int i = 0; i < n; i++) {
        printf("Value %d: ", i + 1);
        if (scanf("%lf", &value) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }
        sum += value;
    }

    mean = sum / n;

    printf("\n--- Results ---\n");
    printf("Total Values (N) = %d\n", n);
    printf("Sum             = %.2lf\n", sum);
    printf("Mean            = %.2lf\n", mean);

    return 0;
}

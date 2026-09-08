#include <stdio.h>
#include <float.h>

int main() {
    double value;
    double largest, smallest;
    int total_numbers = 100;

    printf("Enter %d numbers:\n", total_numbers);

    printf("Value 1: ");
    if (scanf("%lf", &value) != 1) {
        printf("Invalid input. Exiting.\n");
        return 1;
    }
    largest = value;
    smallest = value;

    for (int i = 2; i <= total_numbers; i++) {
        printf("Value %d: ", i);
        if (scanf("%lf", &value) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }

        if (value > largest) {
            largest = value;
        }

        if (value < smallest) {
            smallest = value;
        }
    }

    printf("\n--- Results ---\n");
    printf("Largest Value  = %.2lf\n", largest);
    printf("Smallest Value = %.2lf\n", smallest);

    return 0;
}

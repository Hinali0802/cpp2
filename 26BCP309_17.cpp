#include <stdio.h>

int main() {
    double value;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    int total_numbers = 200;

    printf("Enter %d numbers:\n", total_numbers);

    for (int i = 1; i <= total_numbers; i++) {
        printf("Value %d: ", i);
        if (scanf("%lf", &value) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }

        if (value > 0) {
            positive_count++;
        } else if (value < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    printf("\n--- Classification Results ---\n");
    printf("Positive Numbers : %d\n", positive_count);
    printf("Negative Numbers : %d\n", negative_count);
    printf("Zeros            : %d\n", zero_count);

    return 0;
}

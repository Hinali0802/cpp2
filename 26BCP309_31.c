#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 2; i <= 500; i++) {
        int is_prime = 1;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            sum += i;
        }
    }

    printf("Summation of prime numbers between 1 and 500: %d\n", sum);

    return 0;
}

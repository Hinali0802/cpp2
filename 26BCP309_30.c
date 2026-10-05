#include <stdio.h>

int main() {
    int count = 0, sum = 0;

    printf("Prime numbers between 1 and 500:\n");
    for(int i = 2; i <= 500; i++) {
        int is_prime = 1;
        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if(is_prime) {
            printf("%d ", i);
            count++;
            sum += i;
        }
    }

    printf("\n\nTotal Prime Numbers Count: %d\n", count);
    printf("Summation of Prime Numbers: %d\n", sum);
    return 0;
}

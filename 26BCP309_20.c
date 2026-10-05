#include <stdio.h>

int main() {
    int sum_div_3 = 0;
    for(int i = 1; i <= 100; i++) {
        if(i % 3 == 0) {
            sum_div_3 += i;
        }
    }

    printf("\n\nSum of all numbers between 1 and 100 divisible by 3: %d\n", sum_div_3);
    return 0;
}

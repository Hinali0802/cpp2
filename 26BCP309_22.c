#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    while(temp != 0) {
        count++;
        temp /= 10;
    }
    printf("Total digits in %d = %d\n", num, count);
    return 0;
}

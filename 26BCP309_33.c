#include <stdio.h>

int main() {
    int num, square, temp, is_automorphic = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    temp = num;

    while(temp > 0) {
        if(temp % 10 != square % 10) {
            is_automorphic = 0;
            break;
        }
        temp /= 10;
        square /= 10;
    }

    if(is_automorphic) printf("%d is an Automorphic number (Square = %d).\n", num, num * num);
    else printf("%d is not an Automorphic number.\n", num);
    return 0;
}

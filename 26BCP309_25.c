#include <stdio.h>

int main() {
    int num, reverse = 0, temp, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while(temp != 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }

    if(num == reverse) printf("%d is a Palindrome number.\n", num);
    else printf("%d is not a Palindrome number.\n", num);
    return 0;
}

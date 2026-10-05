#include <stdio.h>

int main()
{
    int num, reverse = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    while(temp != 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }
    printf("Reverse of %d = %d\n", num, reverse);
    return 0;
}

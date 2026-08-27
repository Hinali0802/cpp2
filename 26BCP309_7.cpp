#include <stdio.h>

int main()
{
    int a,b=0,c=0;
    printf("Enter N:");
    scanf("%d", &a);
    while (b<=a)
    {
        printf("sum is %d \n",c);
        c=c+a;
        b=b+1;
    }
    return 0;
}

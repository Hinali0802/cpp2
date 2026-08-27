#include<stdio.h>
int main()
{
    int a=2,n;
    printf("enter value of n:");
    scanf("%d",&n);
    while(a<=n)
    {
        printf("%d \n",a);
        a=a+2;
    }
    return 0;
}

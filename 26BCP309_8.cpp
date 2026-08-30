#include<stdio.h>
int main()
{
    int a,b=0;
    printf("enter the value of a:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        b+=(2*i)-1;
    }
    printf("odd numbers sum: %d \n",b);
    return 0;
}

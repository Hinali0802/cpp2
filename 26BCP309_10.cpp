#include<stdio.h>
int main()
{
    int n;
    unsigned long long fac = 1;
    printf("enter an integer:");
    scanf("%d",&n);
    if(n>=0)
    {
        for(int i=1;i<=n;++i)
        {
            fac*=i;
        }
       printf("facrorial %d = %llu \n",n,fac);
    }
    else
    {
        printf("num is negative");
    }
    return 0;
}

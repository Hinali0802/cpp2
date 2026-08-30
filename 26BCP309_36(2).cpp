#include<stdio.h>
int main()
{
    for(int i=1,j=5;i<=3;i++,j--)
    {
        printf("%d %d \n",i,j);
        if(i<3)
        {
        printf("%d %d \n",i,j);
        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool pall_check(char[]);
int main()
{
    char s[30];
    bool v;
    printf("enter s string :");
    gets(s);
    v=pall_check(s);
    if(v)
    {
        printf("string is pallindrome");
    }
    else
    {
        printf("string is not pallindrome");
    }
    return 0;
}
bool pall_check(char s[])
{
    char t[30];
    strcpy(t,s);
    strrev(t);
    if(strcmp(s,t)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

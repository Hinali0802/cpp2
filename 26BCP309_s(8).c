#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50], str2[50];
    printf("Enter a string: ");
    gets(str1);
    strcpy(str2, str1);
    strrev(str2);
    if (strcmp(str1, str2) == 0)
    {
        printf("%s is Palindrome", str1);
    }
    else
    {
        printf("%s is not Palindrome", str1);
    }
    return 0;
}

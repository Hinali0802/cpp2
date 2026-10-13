#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int vowels = 0,i;
    printf("enter a string:");
    gets(str);
    i = 0;
    while (str[i] != '\0')
    {
        switch(str[i])
        {
        case 'a':    case 'A':    case 'E':    case 'e':
        case 'I':    case 'i':
        case 'O':    case 'o':    case 'U':
        case 'u': vowels++;
        }
        i++;
    }
    printf("%s contains %d vowels. \n",str,vowels);
    return 0;
}

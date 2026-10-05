#include <stdio.h>

int main() {
    char code;
    int boys = 0, girls = 0;

    for(int i = 1; i <= 50; i++) {
        printf("Student %d sex code (M/F): ", i);
        scanf(" %c", &code);

        if(code == 'M' || code == 'm')
        {
            boys++;
        }
        else if(code == 'F' || code == 'f')
        {
            girls++;
        }
    }

    printf("\nTotal Boys: %d", boys);
    printf("\nTotal Girls: %d\n", girls);
    return 0;
}

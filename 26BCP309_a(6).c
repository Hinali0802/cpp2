#include<stdio.h>
int main()
{
    int r1, c1, r2, c2;
    printf("ENTER A COLS AND ROW: ");
    scanf("%d %d", &r1, &c1);
    printf("ENTER B COLS AND ROWS: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2)
    {
        printf("MUTIPLICATION NOT POSSIBLE.\n");
    }
    else
    {
    int a[r1][c1], b[r2][c2], prod[r1][c2];

    printf("\nENTER A ELEMENTS:\n");
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nENTER B ELEMENTS:\n");
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            prod[i][j] = 0;
        }
    }
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            for(int k = 0; k < c1; k++)
            {
                prod[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("\nPRODUCT OF MATRICS:\n");
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++) {
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
}

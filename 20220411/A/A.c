#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if (n%2==1)
    {
        for(j = 1;j <= n;j++)
        {
            for(i = 1;i <= (n - j);i++)
            {
                printf(" ");
            }
            for(i = 1;i <= (-1 + 2 * j);i++)
            {
                printf("*");
            }
            printf("\n");
        }
        for(j = 1;j <= (n - 1);j++)
        {
            for(i = 1;i <= j;i++)
            {
                printf(" ");
            }
            for(i = 1;i <= (2 * n - 1 - 2 * j);i++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        for(i = 1;i <= 2 * n - 1;i++)
        {
            printf("*");
        }
        printf("\n");
        for(j = 1;j <= (n - 1);j++)
        {
            for(i = 1;i <= (n - j);i++)
            {
                printf("*");
            }
            for(i = 1;i <= (-1 + 2 * j);i++)
            {
                printf(" ");
            }
            for(i = 1;i <= (n - j);i++)
            {
                printf("*");
            }
            printf("\n");
        }
        for(j = 2;j <= (n -1);j++)
        {
            for(i = 1;i <= j;i++)
            {
                printf("*");
            }
            for(i = 1;i <= (2 * n - 1 - 2 * j);i++)
            {
                printf(" ");
            }
            for(i = 1;i <= j;i++)
            {
                printf("*");
            }
            printf("\n");
        }
        for(i = 1;i <= 2 * n - 1;i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
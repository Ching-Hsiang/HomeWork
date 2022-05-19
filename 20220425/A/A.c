#include<stdio.h>
int main()
{
    int N,count;
    unsigned long long num1,num2,num3;
    while(scanf("%d",&N) != EOF)
    {
        printf("%d %d",0,1);
        num1 = 0;
        num2 = 1;
        num3 = 0;
        for(count = 1;count <= N -1;count++)
        {
            num3 = num1 + num2;
            num1 = num2;
            num2 = num3;
            printf(" %llu",num3);
        }
        printf("\n");
    }
    return 0;
}
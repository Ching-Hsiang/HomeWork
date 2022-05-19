#include<stdio.h>
int main()
{
    int num,quotient,remind,count = 0;
    while(scanf("%d",&num) != EOF)
    {
        count = num;
        while(num >= 3)
        {
            quotient = num / 3;
            remind = num % 3;
            count = count + quotient;
            num = quotient + remind;
        }
        if(num == 2)
        {
            count += 1;
        }
        printf("%d\n",count);
    }
    return 0;
}
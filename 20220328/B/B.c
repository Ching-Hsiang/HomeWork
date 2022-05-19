#include<stdio.h>

int main()
{
    int Num,bigNum;
    int biggest = 0;
    int biggestNum = 0;

    while (scanf("%d",&Num) !=EOF)
    {
        int count = 1;
        bigNum = Num;
        while (Num>1)
        {
            if (Num%2==0)
            {
                Num = Num/2;
                count++;
            }
            else
            {
                Num = 3*Num + 1;
                count++;
            }
        }

        if (count > biggest) {
            biggest = count;
            biggestNum = bigNum;
        }
    }
    printf("%d %d",biggestNum,biggest);
    return 0;
}

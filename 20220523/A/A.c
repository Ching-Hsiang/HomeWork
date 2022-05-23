#include<stdio.h>

void snake(int,int);

int main()
{
    int R,C,N;
    scanf("%d %d",&R,&C);
    snake(R,C);
    printf("\n");
    return 0;
}

void snake(int a, int b)
{
    int anum = 0,bnum = 0,num = 0,count = 1;
    int square;
    square = a + b;
    int sq[a][b];
    for (num = 0;num <= square - 2;num++)
    {
        if(num > 0 && num % 2 == 1) {
            for(anum = 0,bnum = 0;anum <= num;count++) {
                sq[anum][bnum] = count;
                anum++;
                bnum--;
            }
        }
        if(num > 0 && num % 2 == 0) {
            for(anum = 0,bnum = 0;bnum < num;count++) {
                sq[anum][bnum] = count;
                anum--;
                bnum++;
            }
        }
    }
    int i,j;
    for(i = 0;i < a;i++)
    {
        for(j = 0;j < b;j++)
        {
            printf("%5d",sq[i][j]);
        }
    }
    return ;
}
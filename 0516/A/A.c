#include<stdio.h>

void old(int, int, int, int, int, int);

int main()
{
    int N,n;
    int nowday,nowmonth,nowyear;
    int borday,bormonth,boryear;
    scanf("%d\n",&N);
    for(n = 1;n <= N;n++) {
        scanf("%d/%d/%d", &nowday, &nowmonth, &nowyear);
        scanf("%d/%d/%d", &borday, &bormonth, &boryear);
        printf("Case #%d: ",n);
        old(nowday,nowmonth,nowyear,borday,bormonth,boryear);
    }
    return 0;
}

void old(int a,int b,int c,int d,int e,int f)
{
    int y;
    y = c - f - 1;
    if(y < 0) {
        printf("Invalid birth date\n");
    }
    if(y > 130) {
        printf("Check birth date\n");
    }
    if(y >= 0 && y <= 130) {
        if(b > e) {
            y++;
            printf("%d\n",y);
        }
        if(b == e) {
            if(a >= d) {
                y++;
                printf("%d\n",y);
            }
            else {
                y = y;
                printf("%d\n",y);
            }
        }
        if(b < e) {
            y = y;
            printf("%d\n",y);
        }
    }
    return ;
}
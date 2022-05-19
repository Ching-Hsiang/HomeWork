#include<stdio.h>
unsigned long co(int,int);
int main()
{
    int T,N;
    int a, b, c, d;
    unsigned long i = 0,j = 0;
    unsigned long ans;
    scanf("%d",&T);
    for(N = 1;N <= T;N++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        i = co(a,b);
        j = co(c,d);
        ans = j - i;
        printf("Case %d: %lu\n",N,ans);
    }
    return 0;
}

unsigned long co(int x,int y)
{
    unsigned long count,mid;
    mid = x + y;
    count = (1 + mid) * mid / 2;
    count += x;
    return count;
}
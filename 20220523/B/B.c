#include<stdio.h>

void turn(int);

int main()
{
    int n,i;
    char ch;
    char position[n];
    scanf("%d",&n);
    for(i = 0;i < n;i++) {
        scanf("%s",&position[i]);
    }
    for(i = 0;i < n;i++)
    {
        ch = position[i];
        puts(ch);
    }
    return 0;
}

void turn(int a)
{
    return ;
}
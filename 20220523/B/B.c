#include<stdio.h>

int turn(int ,char );

int main()
{
    int n,upnum;
    char position;
    scanf("%d",&n);
    while( n != 0) {
        scanf("%s",&position);
        for(;n > 0;n--) {
            scanf("%s",&position);
            turn(turn(upnum,position),position);
        }
        print("%d\n",turn(upnum,position));
    }
    return 0;
}

int turn(int num,char a)
{
    switch (a)
    {
    case 'north':
        break;
    case 'south':
        break;
    case 'east':
        break;
    case 'west':
        break;
    default:
        break;
    }
    return num;
}
#include<stdio.h>
int main()
{
    int casenum,small,big,count,sum;
    scanf("%d",&casenum);
    for(count = 1;count <= casenum;count++) {
        scanf("%d %d",&small,&big);
        if(small % 2 == 0) {
            small += 1;
        }
        for(sum = 0;small <= big;small +=2) {
            sum += small;
        }
        printf("Case %d: %d\n",count,sum);
    }
    return 0;
}
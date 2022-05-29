#include<stdio.h>
int main()
{
    int R,C;
    while( scanf("%d %d",&R,&C) != EOF ) {
        int a = 0,b = 0;
        int num = 1,count = 0,i = 1;
        int s[100][100] = {0}; //陣列初始化有問題，動態記憶體
        while(count <= (R + C - 2)) {
            if(count % 2 == 0) {
                while(a >= 0) {
                    s[a--][b++] = num;
                    if(a >= R || b >= C) {
                        continue;
                    }
                    num++;
                }
                a = 0;
            }
            if(count % 2 == 1) {
                while(b >= 0) {
                    s[a++][b--] = num;
                    if(a >= R || b >= C) {
                        continue;
                    }
                    num++;
                }
                b = 0;
            }
            count++;
            i++;
        }
        for(a = 0;a < R;a++)
        {
            for(b = 0;b < C;b++)
            {
                printf("%5d",s[a][b]);
            }
            printf("\n");
        }
        if(i <= 2) {
            printf("\n");//輸出空行刪不掉
        }
    }
    return 0;
}
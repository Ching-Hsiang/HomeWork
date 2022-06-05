#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,m;
    int a;
    int i = 0,j = 0;
    int caseNum = 1,count;
    while ( scanf("%d %d", &n, &m) != EOF ) {
        if ( n == 0 && m == 0 ) {
            break;
        }
        else {
            char ** sq = ( char ** ) malloc ((n + 1) * sizeof( char * )); //宣告字串二維陣列
            for(a = 0;a < n;a++) { sq[a] = ( char * ) malloc ((m + 1) * sizeof ( char )); }
            
            for(i = 0;i < n;i++) { //寫入字串
                scanf("%s",sq[i]);
            }
            
            for(i = 0;i < n;i++) {
                for(j = 0;j < m;j++) {
                    if ( sq[i][j] == '*' ) {
                        continue;
                    }
                    else {
                        count = 0;
                        if (i > 0 && j > 0 && sq[i - 1][j - 1] == '*') //左上
                            count++;
                        if (i > 0 && sq[i - 1][j] == '*') //上
                            count++;
                        if (i > 0 && j < (m - 1) && sq[i - 1][j + 1] == '*') //右上
                            count++;
                        if (j > 0 && sq[i][j - 1] == '*') //左
                            count++;
                        if (j < (m - 1) && sq[i][j + 1] == '*') //右
                            count++;
                        if (i < (n - 1) && j > 0 && sq[i + 1][j - 1] == '*') //左下
                            count++;
                        if (i < (n - 1) && sq[i + 1][j] == '*') //下
                            count++;
                        if (i < (n - 1) && j < (m - 1) && sq[i + 1][j + 1] == '*') //右下
                            count++;
                        sq[i][j] = count + '0';
                    }
                }
            }

            printf("Field #%d:\n",caseNum++); 
            for(i = 0;i < n;i++) {
                puts( sq[i] );
            }
            printf("\n");
            
            
            for(a = 0;a < n;a++) {free(sq[a]);}
            free(sq);
        }
    }
    return 0;
}
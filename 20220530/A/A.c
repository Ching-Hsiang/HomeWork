#include<stdio.h>
#include<stdlib.h>

int main()
{
    int T,M; //T為測資數量，M為幾階方陣
    int a,i,j,x,y;
    int count = 1,num = 1;
    char w1,w2;
    scanf("%d",&T);
    while( num <= T) {
        scanf(" %c %c %d",&w1,&w2,&M);

        int ** sq = (int **)malloc( M * sizeof (int *) ); //宣告二維陣列動態記憶體
        for(a = 0;a < M;a++) { sq[a] = (int *)malloc( M * sizeof (int)); }
        
        for(x = 0;x < M;x++) {
            for(y = 0;y < M;y++) {
                scanf("%d",&sq[x][y]); //寫入二維陣列值
                }
        }

        for(i = 0;i < M;i++) { //檢查陣列值正負
            for(j = 0;j < M;j++) {
                if( sq[i][j] < 0 ) {
                    printf("Test #%d: Non-symmetric.\n",num);
                    goto here;
                }
            }
        }

        i = 0,j = 0,x = (M - 1),y = (M - 1);
        count = 1;
        while( count <= (0.5 * M * M) ) { //檢查陣列值對稱
            count++;
            if( sq[i][j] == sq[x][y] ) {
                j++;
                y--;
                if( y < 0) {
                    i++;
                    j = 0;
                    x--;
                    y = (M - 1);
                }
                continue;
            }
            else {
                printf("Test #%d: Non-symmetric.\n",num);
                goto here;
            }
        }
        printf("Test #%d: Symmetric.\n",num);
        here : num++;
        for(a = 0;a < M;a++) {free(sq[a]);}
        free(sq);
    }
    return 0;
}
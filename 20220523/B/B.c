#include<stdio.h>
#include<string.h>

void turn(int * ,char );

int main()
{
    int n,count;
    scanf("%d",&n);
    char position[n][6];
    int dice[6] = {1,5,2,4,6,3};//初始化骰子
    int * num = &dice;
    int temp;
    char str1[] = "north",str2[] = "south",str3[] = "east",str4[] = "west";
    while( n != 0) {
        for(count = 0;count < n;count++) {
            scanf("%s",&position[count][6]);//寫入指令順序
        }
        for(count = 0;count < n;count++) {  //轉動骰子
            if(strcmp(position[count][6],str1) == 0) {
                temp = *num;
                *num = *(num + 1);
                *(num + 1) = *(num + 4);
                *(num + 4) = *(num + 2);
                *(num + 2) = temp;
            }
            if(strcmp(position[count][6],str2) == 0) {
                temp = *num;
                *num = *(num + 2);
                *(num + 2) = *(num + 4);
                *(num + 4) = *(num + 1);
                *(num + 1) = temp;
            }
            if(strcmp(position[count][6],str3) == 0) {
                temp = *num;
                *num = *(num + 5);
                *(num + 5) = *(num + 4);
                *(num + 4) = *(num + 3);
                *(num + 3) = temp;
            }
            if(strcmp(position[count][6],str4) == 0) {
                temp = *num;
                *num = *(num + 3);
                *(num + 3) = *(num + 4);
                *(num + 4) = *(num + 5);
                *(num + 5) = temp;
            }
        }
        printf("%d\n",dice[0]);
    }
    return 0;
}

void turn(int * num,char a)
{
    return ;
}